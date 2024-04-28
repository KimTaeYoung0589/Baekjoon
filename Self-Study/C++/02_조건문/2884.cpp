// 알람 시계
#include <iostream>
using namespace std;

int h, m;

int main(){
    cin >> h >> m;

    if(h <= 23 && m <= 59){
        if(h == 0 && m < 45){
            h = 23;
            m += 15;
            cout << h << ' ' << m;
        }
        else if (m < 45){
            h -= 1;
            m += 15;
            cout << h << ' ' << m;
        }
        else{
            m -= 45;
            cout << h << ' ' << m;
        }
    }
    
    return 0;
}