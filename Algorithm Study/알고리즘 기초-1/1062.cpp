/* 가르침 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, k;
vector<int> words;
int maxReadable = 0;

void dfs(int index, int count, int learned) {
    if (count == k) {
        int readable = 0;
        for (int word : words) {
            if ((word & learned) == word) {
                readable++;
            }
        }
        maxReadable = max(maxReadable, readable);
        return;
    }

    for (int i = index; i < 26; i++) {
        if (!(learned & (1 << i))) {
            dfs(i + 1, count + 1, learned | (1 << i));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    if (k < 5) {
        cout << 0 << '\n';
        return 0;
    }

    words.resize(n);
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        int mask = 0;
        for (char c : word) {
            mask |= (1 << (c - 'a'));
        }
        words[i] = mask;
    }

    int basic = 0;
    basic |= (1 << ('a' - 'a'));
    basic |= (1 << ('n' - 'a'));
    basic |= (1 << ('t' - 'a'));
    basic |= (1 << ('i' - 'a'));
    basic |= (1 << ('c' - 'a'));

    k -= 5; // 기본 글자 5개를 이미 배웠으므로 k에서 5를 뺌
    dfs(0, 0, basic);

    cout << maxReadable << '\n';

    return 0;
}
