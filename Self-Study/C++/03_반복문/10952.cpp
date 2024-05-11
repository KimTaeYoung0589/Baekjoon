// A+B - 5
#include <iostream>
using namespace std;

int a, b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        cout << a + b << '\n';
    }

    return 0;
}