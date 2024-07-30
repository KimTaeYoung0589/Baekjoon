/* 히든 넘버 */
#include <iostream>
#include <string>
using namespace std;

int n;
string input, number;
long long sum = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> input;

    for(char c: input){
        if(isdigit(c)){
            number += c;
        } else {
            if(!number.empty()){
                sum += stoll(number);
                number = "";
            }
        }        
    }

    // 마지막에 남은 숫자 있으면 더해주기
    if(!number.empty()){
        sum += stoll(number);
    }

    cout << sum << "\n";

    return 0;
}