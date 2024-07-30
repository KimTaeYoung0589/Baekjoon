// 이분 그래프
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

#define INF 987654321;
#define RED 1
#define BLUE 2
using namespace std;

int k; // 테스트 케이스 = k
int v, e; // 정점의 개수 = v, 간선의 개수 = e
int dot1, dot2; // 두 개의 정점 이름 dot1과 dot2
vector<vector<int>> graph;
vector<int> isVisited;

void input(){
    cin >> v >> e;
    graph.assign(v + 1, vector <int>(0, 0));
    isVisited.assign(v + 1, false);

    for (int i = 0; i < e; i++){
        int s, e;
        cin >> s >> e;
        graph[s].emplace_back(e);
        graph[e].emplace_back(s);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);


}