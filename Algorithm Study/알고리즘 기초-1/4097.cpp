// 수익
// #include<iostream>
// using namespace std;
// int n, p;
// int revenue[250001];

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     while(true){
//         cin >> n;
//         if(n == 0)
//             break;

//         for (int i = 0; i < n; ++i){
//             cin >> revenue[i];
//         }

//         int max_sum = revenue[0];
//         for (int i = 0; i < n; ++i){
//             int current_sum = 0;
//             for (int k = 0; k < n; ++k){
//                 current_sum += revenue[k];
//                 if(current_sum > max_sum){
//                     max_sum = current_sum;
//                 }
//             }
//         }
//         cout << max_sum << '\n';
//     }
//         return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n != 0) {
        vector<int> profit(n);

        for (int i = 0; i < n; ++i) {
            cin >> profit[i];
        }

        int max_current = profit[0]; /* 현재 위치에서 끝나는 최대 연속 부분합 저장 변수 */
        int max_global = profit[0]; /* 최대 연속 부분합을 저장 변수 */

        /* 수익을 차례대로 확인하면서 max_current 갱신, max_global 업데이트 */
        for (int i = 1; i < n; ++i) {
            max_current = max(profit[i], max_current + profit[i]);
            if (max_current > max_global) {
                max_global = max_current;
            }
        }

        cout << max_global << '\n';
    }
    return 0;
}