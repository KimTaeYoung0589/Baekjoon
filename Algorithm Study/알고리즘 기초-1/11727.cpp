// 2×n 타일링 2
#include <iostream>
using namespace std;

int n;
int i = 0;
int main(){
    cin >> n;

    int dp[1001] = {0};
    dp[1] = 1;
    dp[2] = 3;
    
    // 짝수일  때는 2*(n-1) + 1, 홀수일 때는 2*(n-1) - 1
    for (int i = 2; i <= n; i++){
        if(i % 2 == 0){
            dp[i] = 2 * dp[i - 1] + 1;
            dp[i] %= 10007;
        }
        else{
            dp[i] = 2 * dp[i - 1] - 1;
            dp[i] %= 10007;
        }
    }
    cout << dp[n];

    return 0;
}