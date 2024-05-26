// x보다 작은 수
#include <iostream>
using namespace std;

int n, x;
int n_seq[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> n_seq[i];
        if( x > n_seq[i]){
            cout << n_seq[i] << " ";
        }
    }
    
    return 0;
}