// 대칭 차집합
#include <iostream>
#include <set>
using namespace std;

int A, B;
set<int> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> A >> B;

    for (int i = 0; i < A; i++) {
        int temp;
        cin >> temp;
        a.insert(temp);
    }

    int dup = 0;
    for (int i = 0; i < B; i++) {
        int temp;
        cin >> temp;
        /* temp가 집합 a에 존재하면 dup을 1 증가 */
        if (a.find(temp) != a.end()) { 
            dup++;
        }
    }
    cout << (A - dup) + (B - dup) << '\n';
    return 0;
}