// 최대공약수와 최소공배수
#include <iostream>
#include <algorithm>

using namespace std;
int n1, n2;
int gcd(int a, int b){
    int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b; 
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main(){
	cin >> n1 >> n2;
	cout << gcd(n1, n2) << "\n" << lcm(n1, n2);
    return 0;
}