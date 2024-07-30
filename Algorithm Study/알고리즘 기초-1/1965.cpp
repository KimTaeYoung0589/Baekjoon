#include <iostream>
using namespace std;

int box_size[1500],dp[1500];
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> box_size[i];
    }
    dp[0] = box_size[0];

    return 0;
}