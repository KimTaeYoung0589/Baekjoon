// Two Dots
#include <iostream>
using namespace std;

int n, m;
char board[51][51];
bool visited[51][51];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool is_find = false;

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cin >> board[i][k];
        }
    }
}

void init() {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            visited[i][k] = false;
        }
    }
}

void dfs(int x, int y, int from_x, int from_y, int depth) {
    if (is_find) return;

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if (nx == from_x && ny == from_y) continue;
        if (board[nx][ny] != board[x][y]) continue;
        
        if (visited[nx][ny]) {
            if (depth >= 4) {
                is_find = true;
                return;
            }
        } else {
            dfs(nx, ny, x, y, depth + 1);
        }
    }

    visited[x][y] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    input();
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            init();
            dfs(i, k, -1, -1, 1);
            if (is_find) {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }

    cout << "No" << '\n';
    return 0;
}