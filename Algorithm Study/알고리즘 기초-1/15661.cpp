// 링크와 스타트
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int S[20][20];
int min_diff = INT_MAX;

void calculate_min_diff(int idx, vector<int>& team1, vector<int>& team2) {
    if (idx == N) {
        if (team1.size() == N / 2 && team2.size() == N / 2) {
            int team1_score = 0, team2_score = 0;
            for (int i = 0; i < team1.size(); ++i) {
                for (int j = 0; j < team1.size(); ++j) {
                    team1_score += S[team1[i]][team1[j]];
                    team2_score += S[team2[i]][team2[j]];
                }
            }
            min_diff = min(min_diff, abs(team1_score - team2_score));
        }
        return;
    }

    if (team1.size() < N / 2) {
        team1.push_back(idx);
        calculate_min_diff(idx + 1, team1, team2);
        team1.pop_back();
    }
    if (team2.size() < N / 2) {
        team2.push_back(idx);
        calculate_min_diff(idx + 1, team1, team2);
        team2.pop_back();
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> S[i][j];
        }
    }

    vector<int> team1, team2;
    calculate_min_diff(0, team1, team2);

    cout << min_diff << endl;
    return 0;
}