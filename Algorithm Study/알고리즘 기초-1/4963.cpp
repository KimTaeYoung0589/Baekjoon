// // 섬의 개수
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int w, h;
// vector<vector<int>> island;

// int main(){
//     // ios_base::sync_with_stdio(false);
//     // cout.tie(nullptr);
//     // cin.tie(nullptr);

//     cin >> w >> h;

//     while(1){
//         if(w != 0 && h != 0){
//             vector<vector<int>> island(w,vector<int>(h,0));
//             for (int i = 0; i < w; i++){
//                 for (int k = 0; k < h; k++){
                    
//                 }
//             }
//         }
//         else{
//             break;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int map[50][50], visited[50][50];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int w, h;

void dfs(int y, int x){
    for (int i = 0; i < 8; i++){
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        if(nextX < 0 || nextY < 0 || nextX >= w || nextY >= h)
            continue;
        if(!visited[nextY][nextX] && map[nextY][nextX]){
            visited[nextY][nextX] = 1;
            dfs(nextY, nextX);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(1){
        int cnt = 0;
        cin >> w >> h;
        if(!w && !h)
            break;
        for (int i = 0; i < h; i++){
            for (int k = 0; k < w; k++){
                cin >> map[i][k];
            }
        }
        for (int i = 0; i < h; i++){
            for (int k = 0; k < w; k++){
                if(!visited[i][k] && map[i][k]){
                    visited[i][k] = 1;
                    dfs(i, k);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        memset(visited, 0, sizeof(visited));
    }
}