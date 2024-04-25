// 곱셈
#include <iostream>
using namespace std;

int x, y, result;
int main(){
    cin >> x >> y;
    
    cout << x * (y % 10) << '\n';
    cout << x * ((y % 100 /10)) << '\n';
    cout << x * (y / 100) << '\n';
    cout << x * y;
    return 0;
}