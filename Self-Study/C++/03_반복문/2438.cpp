// 별 찍기 - 1
#include <iostream>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++){
        for (int k = 0; k <= i; k++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}