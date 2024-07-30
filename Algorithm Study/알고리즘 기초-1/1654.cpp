/* 랜선 자르기 */
#include <iostream>
#include <algorithm>
using namespace std;

/* k = 이미 가지고 있는 랜선의 개수, n = 필요한 랜선의 개수
 * k <= 10,000, 1 <= n <= 1,000,000, K <= n 
 * 총합의 길이 합쳐서 자르는 것이 아니라 
 * 각각의 랜선 길이에서 자른 갯수를 더해줘야 함 */
int k, n;
int k_arr[20000], n_arr[20000], num_arr[20000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k >> n;
    for (int i = 0; i < k; i++){
        cin >> k_arr[i];
        n_arr[i] = *min_element(k_arr, k_arr + k);
        int min_value = n_arr[0] / 2;
    }

        return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int k, n;
// int k_arr[10000];

// bool is_possible(int length) {
//     int count = 0;
//     for (int i = 0; i < k; i++) {
//         count += k_arr[i] / length;
//     }
//     return count >= n;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> k >> n;
//     for (int i = 0; i < k; i++) {
//         cin >> k_arr[i];
//     }

//     int left = 1;
//     int right = *max_element(k_arr, k_arr + k);
//     int result = 0;

//     while (left <= right) {
//         int mid = (left + right) / 2;
//         if (is_possible(mid)) {
//             result = mid; // 가능한 최대 길이를 저장
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     cout << result << endl;

//     return 0;
// }