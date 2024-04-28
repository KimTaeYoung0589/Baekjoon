// 빠른 A+B
#include <iostream>
using namespace std;

int t, a, b, result;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << a + b << '\n';
    }
        return 0;
}