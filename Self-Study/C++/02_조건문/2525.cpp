// 오븐 시계
#include <iostream>
using namespace std;

int a, b, c, result;

int main(){
    cin >> a >> b;
    cin >> c;

    result = a * 60 + b + c;

    if(result >= 1440){
        result -= 1440;
    }

    cout << result / 60 << ' ' << result % 60;

    return 0;
}