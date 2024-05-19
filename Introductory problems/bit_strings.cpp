#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long power(int n){
    if(n==1){
        return 2LL%mod;
    }
    else{
        if(n%2==1){
            return ((power(n/2)%mod)*(power(n/2)%mod)*2LL)%mod;
        }
        else{
            return ((power(n/2)%mod)*(power(n/2)%mod))%mod;
        }
    }
}

int main(){
    int n;
    cin >> n;
    cout << power(n) << endl;
    return 0;
}