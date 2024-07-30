// 서울 지하철 2호선
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAX = 3001;
vector<int> adj[MAX];
bool visited[MAX];
bool is_cycle[MAX];
int dist[MAX];

bool dfs(int curr, int parent, vector<int>& path){
    visited[curr] = true;
    path.push_back(curr);

    for(int next: adj[curr]){
        if(!visited[next]){
            if(dfs(next, curr, path))
                return true;
        } else if(next != parent){
            while(path.back() != next){
                is_cycle[path.back()] = true;
                path.pop_back();
            }
            is_cycle[next] = true;
            return true;
        }
    }
    path.pop_back();
    return false;
}

void bfs(){
    queue<int> q;

    for (int i = 1; i <= MAX; i++){
        if(is_cycle[i]){
            dist[i] = 0;
            q.push(i);
        }
    }

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int next: adj[curr]){
            if(dist[next] == -1){
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    memset(is_cycle, false, sizeof(is_cycle));
    memset(dist, -1, sizeof(dist));

    vector<int> path;
    dfs(1, -1, path);
    bfs();

    for (int i = 1; i <= n; i++){
        cout << dist[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}