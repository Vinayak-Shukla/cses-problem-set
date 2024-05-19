#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
    }
    else if(n < 4){
        cout << "NO SOLUTION" << endl;
    }
    else if(n == 4){
        cout << "2 4 1 3" << endl;
    }
    else{
        vector<int> arr(n);
        int num = 1;
        for(int i=0; i<n; i+=2){
            arr[i] = num;
            num++;
        }
        for(int i=1; i<n; i+=2){
            arr[i] = num;
            num++;
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;

}