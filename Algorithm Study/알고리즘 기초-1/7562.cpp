// 나이트의 이동
#include <iostream>
#include <queue>
using namespace std;

int t, l;
int cur_x, cur_y, next_x, next_y;
int arr[301][301], visited[301][301];
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
queue<pair<int, int>> q;

void reset(){
    while(!q.empty())
        q.pop();
    for (int i = 0; i < 301; i++){
        for (int k = 0; k < 301; k++){
            visited[i][k] = 0;
            arr[i][k] = 0;
        }
    }
}

void bfs(int x, int y){
    q.push({x, y});
    visited[x][y] = true;
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if(a == next_x && b == next_y){
            cout << arr[a][b] << '\n';
            while(!q.empty()){
                q.pop();
            }
            break;
        }
        for (int i = 0; i < 8; i++){
            int na = a + dx[i];
            int nb = b + dy[i];
            if( na >= 0 && na < l && nb >= 0 && nb < l && !visited[na][nb]){
                q.push({na, nb});
                visited[na][nb] = true;
                arr[na][nb] = arr[a][b] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> l;
        cin >> cur_x >> cur_y;
        cin >> next_x >> next_y;

        reset();
        bfs(cur_x, cur_y);
    }
}