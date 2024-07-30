// 숨바꼭질 4
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> dist(100001, -1);
    vector<int> prev(100001, -1);

    queue<int> q;
    q.push(n);
    dist[n] = 0;

    /* 큐가 비어있지 않으면 반복 */
    while (!q.empty()) {
        int curr = q.front(); /* 큐 가장 앞에 있는 요소를 curr에 저장 */
        q.pop(); /* 큐 가장 앞에 있는 요소 제거*/

        if (curr == k) break; /* 현재위치 curr가 목표 위치 k와 같으면 종료 */

        /* 다음 이동할 위치 계산 */
        for (int next : {curr - 1, curr + 1, 2 * curr}) {
            if (next >= 0 && next <= 100000 && dist[next] == -1) {
                q.push(next);
                dist[next] = dist[curr] + 1;
                prev[next] = curr;
            }
        }
    }

    cout << dist[k] << '\n';

    vector<int> path;
    for (int at = k; at != -1; at = prev[at]) {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());

    for (int pos : path) {
        cout << pos << ' ';
    }

    return 0;
}