#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum = (n)*(n+1)/2;
    if(sum%2==1){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        vector<int> arr1, arr2;
        int flag = 0;
        for(int i=n; i>1; i-=2){
            if(flag==0){
                arr1.push_back(i);
                arr2.push_back(i-1);
            }
            else{
                arr2.push_back(i);
                arr1.push_back(i-1);
            }
            flag ^= 1;
        }
        if(n%2==1){
            arr2.push_back(1);
        }
        reverse(arr1.begin(), arr1.end());
        reverse(arr2.begin(), arr2.end());
        cout << arr1.size() << endl;
        for(int i=0; i<arr1.size(); i++){
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for(int i=0; i<arr2.size(); i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}