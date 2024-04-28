// 합
#include <iostream>
using namespace std;

int n, result;

int main(){
    cin >> n;

    for (int i = 1; i <= n; i++){
        result += i;
    }
    cout << result;
    return 0;
}