#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int m, n;
        if(a>b){
            m = a;
            n = b;
        }
        else{
            m = b;
            n = a;
        }
        if(m > 2*n){
            cout << "NO\n";
        }
        else{
            int diff = m - n;
            m-=2*diff;
            n-=diff;
            if(n%3==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}