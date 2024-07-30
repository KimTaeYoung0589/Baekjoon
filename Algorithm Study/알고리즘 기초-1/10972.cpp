// // 다음 순열
// #include <iostream>
// using namespace std;

// int n;
// int per_num[20000] = {};

// int main(){
//     ios_base::sync_with_stdio(false);
//     cout.tie(nullptr);
//     cin.tie(nullptr);

//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> per_num[i];
//         for (int k = i + 1; k < n; k++){
//             if(per_num[i]<per_num[k]){
//                 return -1;
//             }
//             if(per_num[i]>per_num[k]){

//             }
//         }
//     }
//         return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int per_num[20000] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> per_num[i];
    }

    return 0; 
}