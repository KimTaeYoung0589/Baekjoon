// 쉬운 계단 수
#include <iostream>
#include <vector>
using namespace std;

int n;
int dp[101] = {0};

int main(){
    cin >> n;

    for (int i = 1; i < n; i++){
        for (int k = 0; k < i; k++){
            dp[i][k] = dp[i - 1][k + 1] + dp[i + 1][k - 1];
        }
    }
    dp[n] = dp[n] % 1000000000;
    return 0;
}