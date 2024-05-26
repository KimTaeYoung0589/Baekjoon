// 개수 세기
#include <iostream>
using namespace std;

int arr[101] = {};
int n, v;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cin >> v;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(v == arr[i]){
            cnt++;  
        }
    }
    cout << cnt;
    
    return 0;
}

// 다른 사람 풀이
// #include<stdio.h>
// int d[210];

// int main(){
// 	int n, t;
// 	scanf("%d", &n);
// 	while(n--){
// 		scanf("%d", &t);
// 		d[t+100]++;
// 	}
// 	scanf("%d", &t);
// 	printf("%d", d[t+100]);
// }