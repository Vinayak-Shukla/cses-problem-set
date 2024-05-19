#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int same = 1;
    for(int i=0; i<s.size()-1; i++){
        int j = i;
        while(j < s.size()-1 && s[j] == s[j+1]){
            j++;
        }
        same = max(same, j-i+1);
        i = j;
    }
    cout << same << endl;
    return 0;
}