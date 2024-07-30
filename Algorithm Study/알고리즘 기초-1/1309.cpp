#include <iostream>
using namespace std;

int dp[100001][3];
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k < i; k++){
            // dp[i][0] = dp[i - 1][0] + dp[i];
        }
    }
    return 0;
}