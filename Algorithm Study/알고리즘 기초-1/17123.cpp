// 배열 놀이
/* 각 배열의 행 열 구한 후에 더 하면 시간 초과
 * 미리 만들어지는 사각형의 행 열을 미리 더하고 
 * 3행 - 2행 + 1 하면 만들어지진 사각형의 행의 수가 나옴
 * 그걸 통해서 미리 행 열을 더한 후 계산 함
 * 1 2
 * 3 4  2행 - 1행 + 1 = 2, v = 3 이라면 2 * 3 + 4를 해주면 됨 */
#include <iostream>
int t, n, m;
int arr[2001][2001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t >> n >> m;
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            cin >> arr[i][k];
        }
    }
        return 0;
}