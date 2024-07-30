#include <iostream>
#include <algorithm>
using namespace std;

int n, r, g, b, result;
int dp[1001][3];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    cin >> r >> g >> b;
    
    dp[1][0] = r;
    dp[1][1] = g;
    dp[1][2] = b;

    for (int i = 2; i <= n; i++){
        cin >> r >> g >> b;
        for (int k = 0; k < n; k++){
            dp[i][0] = min({dp[i - 1][1], dp[i - 1][2], r});
            dp[i][1] = min({dp[i - 1][0], dp[i - 1][2], g});
            dp[i][2] = min({dp[i - 1][0], dp[i - 1][1], b});
        }
    }

    result = min({dp[n][0], dp[n][1], dp[n][2]});
    cout << result<<'\n';

    return 0;
}