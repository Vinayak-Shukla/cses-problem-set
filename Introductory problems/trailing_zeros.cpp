#include<bits/stdc++.h>
using namespace std;
int count(int a, int b){
    int ans = 0;
    if(a >= b){
        return a/b;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int b = 5;
    int next = 5;
    int ans = 0;
    while(b <= n){
        ans += count(n, b);
        b = b*next;
    }
    cout << ans << endl;
    return 0;
}