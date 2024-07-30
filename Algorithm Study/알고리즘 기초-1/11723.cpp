// 집합
#include <iostream>
using namespace std;

int m;
int s = 0;

int add(int x){
    s = 0;
    if(s != x){
        s |= (1 << x);
    }
    
    return s;
}

int remove(int x){
    s = 0;
    if(s != x){
        s &= ~(1 << x);
    }

    return s;
}

int check(int x){
    if(s & (1 << x)){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}

int toggle(int x){
    if(s & (1 << x)){
        s |= (1 << x);
    } else{
        s &= ~(1 << x);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> m;
    for (int i = 0; i < m; i++){
        
    }
        return 0;
}