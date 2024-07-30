// 카잉 달력
#include <iostream>
using namespace std;

int t, m, n, x, y;
int result = -1;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> m >> n >> x >> y;
        int maxi = lcm(m, n);
        for (int i = x; i <= maxi; i+=m){
            int ny = i % n;
            if(ny == 0){
                ny = n;
            }
            if(ny == y){
                result = i;
                break;
            }
        }
        cout << result << '\n';
    }
    return 0;
}   
