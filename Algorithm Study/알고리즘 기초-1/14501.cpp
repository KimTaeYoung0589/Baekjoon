// 퇴사
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    vector<int> t(n + 1), p(n + 1), dp(n + 2);

    // 입력 받기
    for (int i = 1; i <= n; ++i){
        cin >> t[i] >> p[i];
    }

    // dp 이용한 최대 수익 계산
    for (int i = n; i >= 1; --i){
        if(i + t[i] <= n + 1){
            dp[i] = max(dp[i + 1], p[i] + dp[i + t[i]]);
        } else{
            dp[i] = dp[i + 1];
        }
    }

    cout << dp[1] << endl;

    return 0;
}