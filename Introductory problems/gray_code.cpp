#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> codes;
    codes.push_back("0");
    codes.push_back("1");
    for(int i=2; i<=n; i++){
        
            int s = codes.size() - 1;
            while(s>=0){
                codes.push_back(codes[s--]);
            }
            for(int k=0;k<codes.size()/2; k++){
                codes[k].push_back('0');
            }
            for(int k=codes.size()/2; k<codes.size(); k++){
                codes[k].push_back('1');
            }
    }
    for(int i=0;i<codes.size(); i++){
        reverse(codes[i].begin(), codes[i].end());
        cout << codes[i] << endl;
    }
    return 0;
}