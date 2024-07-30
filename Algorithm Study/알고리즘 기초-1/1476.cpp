// 날짜 계산
#include <iostream>
using namespace std;

int E, S, M;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> E >> S >> M;
    
    int year = 1;
    int e = 1, s = 1, m = 1;

    while(e != E || s != S || m != m){
        e = (e % 15) + 1;
        s = (s % 28) + 1;
        m = (m % )
    }
    return 0;
}