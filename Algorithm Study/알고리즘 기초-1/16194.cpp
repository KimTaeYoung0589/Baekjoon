// 카드 구매하기 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main() {
	int n; cin >> n; 
	vector <int> cost(n + 1); 
	vector <int> dp(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> cost[i];
		dp[i] = cost[i]; 
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j] + cost[j]); 
		}
	}
	cout << dp[n]; 
}