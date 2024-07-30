// 수 이어 쓰기 1
#include <iostream>
#include <cmath>
using namespace std;

int n;
int p = 1;
int arr_num[100000001] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    // 10곱할 때 더하는 값은 하나 씩 증가
    for (int i = 0; i < n; i++){
        cin >> arr_num[i];
        if(i <= pow(10, i)){
            p++;
        }
    }

    
        return 0;
}