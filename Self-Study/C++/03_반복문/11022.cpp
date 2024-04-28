// A+B - 8
#include <iostream>
using namespace std;

int t, a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    for (int i = 1; i <= t; i++){
        cin >> a >> b;
        cout << "Case " << "#" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }
        return 0;
}