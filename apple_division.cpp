#include<bits/stdc++.h>
using namespace std;

long long totalSum = 0;
long long solve(vector<long long> &arr, int index, long long currSum){
    if(index==0){
        return abs((totalSum - currSum) - currSum);
    }
    return min(solve(arr, index-1, currSum + arr[index-1]),
    solve(arr,index-1, currSum));
}
int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
        totalSum += arr[i];
    }
    int index = n;
    long long minDiff = solve(arr, index, 0);
    cout << minDiff << endl;
    return 0;
}