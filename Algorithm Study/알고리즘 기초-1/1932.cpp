/* 정수 삼각형 */
#include <iostream>
#include <algorithm>
using namespace std;

int triangle[501][501], dp[501][501];
int depth;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> depth;
    for (int i = 0; i < depth; i++){
        for (int k = 0; k < depth; k++){
            cin >> triangle[i][k];
        }
    }

    dp[0][0] = triangle[0][0];

    for (int i = 1; i < depth; i++){
        for (int k = 0; k < depth; k++){
            if(k == 0){
                dp[i][k] = dp[i - 1][k] + triangle[i][k];
            } else if(k == i){
                dp[i][k] = dp[i - 1][k - 1] + triangle[i][k];
            } else{
                dp[i][k] = max(dp[i - 1][k - 1], dp[i - 1][k]) + triangle[i][k];
            }
        }
    }

    int max_sum = 0;
    for (int k = 0; k < depth; k++){
        max_sum = max(max_sum, dp[depth - 1][k]);
    }
    
    cout << max_sum << '\n';
}