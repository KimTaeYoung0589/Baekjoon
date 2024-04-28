// 영수증
#include <iostream>
using namespace std;

int x, n, a, b, total;

int main(){
    total = 0;
    
    cin >> x >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        total = total + a * b;
    }
    if(x == total){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}