#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> count(26,0);
    for(int i=0; i<s.size(); i++){
        count[s[i]-'A']++;
    }
    int odd_count = 0;
    for(int i=0; i<26; i++){
        if(count[i]%2==1){
            odd_count++;
        }
    }
    if(odd_count>1){
        cout << "NO SOLUTION\n";
    }
    else{
        string ans;
        char odd = ' ';
        if(odd_count==1){
            for(int i=0; i<26; i++){
                if(count[i]%2==1){
                    odd = 'A' + i;
                }
            }
        }
        for(int i=0; i<26; i++){
            for(int j=0; j<count[i]/2; j++){
                ans.push_back('A' + i);
            }
        }
        if(odd!=' '){
            ans.push_back(odd);
        }
        int next_len = ans.size()-1;
        if(odd!=' '){
            next_len--;
        }
        for(int i=0; i<=next_len; i++){
            ans.push_back(ans[next_len-i]);
        }
        cout << ans << endl;
    }
    return 0;
}