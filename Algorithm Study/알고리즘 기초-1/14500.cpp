#include <iostream>
#include <vector>
using namespace std;

int N, M;
int grid[500][500];

// 테트로미노의 모든 가능한 변형을 나타내는 좌표 배열
vector<pair<int, int>> tetrominoes[19] = {
    {{0, 0}, {0, 1}, {0, 2}, {0, 3}}, // I형
    {{0, 0}, {1, 0}, {2, 0}, {3, 0}},
    // 이하 다른 모든 테트로미노의 변형 포함...
};

int calculateScore(int x, int y, const vector<pair<int, int>>& tetromino) {
    int score = 0;
    for (auto& p : tetromino) {
        int nx = x + p.first, ny = y + p.second;
        if (nx >= 0 && nx < N && ny >= 0 && ny < M)
            score += grid[nx][ny];
        else
            return -1; // 범위를 벗어남
    }
    return score;
}

int findMaxScore() {
    int maxScore = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (auto& tetromino : tetrominoes) {
                int score = calculateScore(i, j, tetromino);
                if (score > maxScore) maxScore = score;
            }
        }
    }
    return maxScore;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> grid[i][j];
    cout << findMaxScore() << '\n';
}