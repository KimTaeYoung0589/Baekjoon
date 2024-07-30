// 종이 조각
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m; // n = 세로/열, m = 가로/행

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> m >> n;
    vector<vector<int>> paper_arr(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++){
        for (int k = 0; k < n; k++){
            cin >> paper_arr[i][k];
            
        }
        cout << "\n";
    }

        return 0;
}