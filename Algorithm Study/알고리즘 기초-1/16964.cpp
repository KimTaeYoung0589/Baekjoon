// DFS 스페셜 저지
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[100001];
bool visit[100001];
vector<int> order(100001), answer;

bool comp(int a, int b) {
    return order[a] < order[b];
}

void DFS(int node) {
    answer.push_back(node);
    for (int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if (visit[next]) continue;
        visit[next] = true;
        DFS(next);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> input(n);

    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 0; i < n; i++) {
        cin >> input[i];
        order[input[i]] = i + 1; // 각 노드의 DFS 진행 순서 저장
    }

    int start = input[0];
    if (start != 1) {
        cout << "0";
        return 0;
    }

    // 각 노드의 인접 노드를 DFS 순서에 맞게 정렬
    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end(), comp);
    }

    visit[start] = true;
    DFS(start);

    if (answer == input) cout << "1";
    else cout << "0";

    return 0;
}