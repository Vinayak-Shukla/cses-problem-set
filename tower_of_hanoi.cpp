#include<bits/stdc++.h>
using namespace std;
int countt = 0;
vector<pair<int, int>> path;
void tow(int n, int from_rod, int to_rod, int aux_rod){
    if(n==1){
        countt++;
        path.push_back({from_rod, to_rod});
        return;
    }
    tow(n-1, from_rod, aux_rod, to_rod);
    countt++;
    path.push_back({from_rod, to_rod});
    tow(n-1, aux_rod, to_rod, from_rod);
}
int main(){
    int n;
    cin >> n;
    tow(n,1,3,2);
    cout << countt << endl;
    for(int i=0;i<path.size(); i++){
        cout << path[i].first << " " << path[i].second << endl;
    }
    return 0;
}