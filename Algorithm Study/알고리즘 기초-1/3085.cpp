// 사탕 게임
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
char C, P, Z, Y; // C(빨간색), P(파란색), Z(초록색), Y(노란색)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    vector<string> board(N);

    for (int i = 0; i < N; i++){
        cin >> board[i];
    }

    //cout << N;
    
    return 0;
}