/* 기타 레슨 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> lessons;

bool canDivide(int capacity) {
    int count = 1; // 블루레이의 개수
    int sum = 0;
    for (int lesson : lessons) {
        if (sum + lesson > capacity) {
            count++;
            sum = lesson;
            if (count > m) {
                return false;
            }
        } else {
            sum += lesson;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    lessons.resize(n);
    int maxLesson = 0;
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> lessons[i];
        maxLesson = max(maxLesson, lessons[i]);
        totalSum += lessons[i];
    }

    int left = maxLesson;
    int right = totalSum;
    int result = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canDivide(mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;

    return 0;
}