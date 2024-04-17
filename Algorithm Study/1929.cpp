// 소수 구하기
#include <iostream>
using namespace std;

int n, m;
bool isPrime[1000001];

int main(){
    cin >> m >> n;

    bool arr[1000001] = {false, };
    arr[0] = arr[1] = true;

    for (int i = 2; i * i <= n; ++i){
        if(arr[i]) continue;
        else{
            for (int k = 2; k * i <= n; ++k){
                arr[i * k] = true;
            }
        }
    }

    for (int i = m; i <= n; ++i){
        if(!arr[i])
            cout << i << '\n';
    }
        return 0;
}