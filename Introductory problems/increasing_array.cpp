#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    long long ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i>0){
            ans += max(0, arr[i-1] - arr[i]);
            arr[i] = max(arr[i],arr[i-1]);
        }
    }
    cout << ans << endl;
    return 0;
}