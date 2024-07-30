// 숨바꼭질
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    if (n >= k) {
        cout << n - k << endl;
        return 0;
    }
    
    int t = abs(n - k);
    int min_steps = t;

    // x + 1이 최소인 경우
    for (int i = 0; i <= t; ++i) {
        int temp = n + i;
        int steps = i + abs(temp - k);
        if (steps < min_steps) {
            min_steps = steps;
        }
    }

    // 2 * x가 최소인 경우
    for (int i = 0; i <= t; ++i) {
        int temp = n * (1 << i);
        int steps = i + abs(temp - k);
        if (steps < min_steps) {
            min_steps = steps;
        }
    }

    // x + 1과 2 * x가 동시에 사용되는 경우
    for (int i = 0; i <= t; ++i) {
        int temp = n + i;
        for (int j = 0; j <= t; ++j) {
            int temp2 = temp * (1 << j);
            int steps = i + j + abs(temp2 - k);
            if (steps < min_steps) {
                min_steps = steps;
            }
        }
    }

    cout << min_steps << endl;
    return 0;
}