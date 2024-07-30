/* 문자열 폭발 */
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word, boom;
    cin >> word >> boom;

    stack<char> s;

    for (char ch : word) {
        s.push(ch);

        if (s.size() >= boom.size()) {
            bool match = true;
            for (int i = 0; i < boom.size(); ++i) {
                if (s.top() != boom[boom.size() - 1 - i]) {
                    match = false;
                    break;
                }
                s.pop();
            }

            if (!match) {
                for (int i = boom.size() - 1; i >= 0; --i) {
                    s.push(boom[i]);
                }
            }
        }
    }

    string result;
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    reverse(result.begin(), result.end());

    if (result.empty()) {
        cout << "FRULA";
    } else {
        cout << result;
    }

    return 0;
}