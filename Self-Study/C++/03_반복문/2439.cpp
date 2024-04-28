// 별 찍기 - 2
#include <iostream>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int row = 1; row <= n; row++) {
		for (int i = 0; i < n - row; i++) {
			cout << ' ';
		}
		for (int i = 0; i < row; i++) {
			cout << '*';
		}
		cout << '\n';
	}
    
	return 0;
}