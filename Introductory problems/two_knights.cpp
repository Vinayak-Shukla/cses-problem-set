#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> arr(10001, 0);
    arr[2] = 6;
    long long diff = 8;
    long long next = 16;
    long long step = 8;
    for(int i=3; i<=10000; i++){
        long long s = i;
        long long sum = ((s*s)*(s*s - 1))/2;
        sum -= diff;
        arr[i] = sum;
        diff = diff + next;
        next = next + step;
    }
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}