#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,m;
    int ans = 0;
    cin >> n >> m;
    int k = 0;
    for(int i = 1; i <= n; i++){
        map<int,int> mp;
        int l;  cin >> l; 
        vector<int> a(l);
        for(int &x : a){
            cin >> x;
            mp[x]++;
        }
        int mex = 0;
        while(mp[mex] != 0){
            mex++;
        }
        mp[mex]=1;
        while(mp[mex] != 0){
            mex++;
        }
        k = max(mex, k);
    }
    cout << ((k >= m) ? (m + 1) * k : k * k + (m + k) * (m - k + 1) / 2 ) << endl;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}