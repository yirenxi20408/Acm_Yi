#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

void solve(){
    int a, b, m, n;
    cin >> a >> b >> m >> n;
    vector<pair<int,int>> xy(n);
    for(int i = 0; i < n; i++){
        cin >> xy[i].first >> xy[i].second;
    }
    int alice = 0, bob = 0, uu = 0, dd = n, ll = 0, rr = m;
    vector<pair<char,int>> ck(m);
    for(int i = 0; i < m; i++){
        cin >> ck[i].first >> ck[i].second;
    }
    sort(xy.begin(), xy.end(),cmp);
    
}

signed main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _ = 1;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}