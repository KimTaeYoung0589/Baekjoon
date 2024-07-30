#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

bool broken[10];

bool canType(int channel) {
    if (channel == 0) return !broken[0];
    while (channel > 0) {
        if (broken[channel % 10]) return false;
        channel /= 10;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        broken[b] = true;
    }

    // 최악의 경우, 100번에서 +, -만 사용
    int result = abs(N - 100);
    
    // 모든 채널을 검사하여 최소 클릭 수 찾기
    for (int i = 0; i <= 1000000; i++) {
        if (canType(i)) {
            int press = to_string(i).length() + abs(N - i);
            result = min(result, press);
        }
    }

    cout << result;
    return 0;
}