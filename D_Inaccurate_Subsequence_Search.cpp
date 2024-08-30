#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i= 0,j = 0; i < m; i++){
        cin >> j;
        mp[j]++;
    }
    map<int,int> cnt;
    int c = 0,ans = 0;
    for(int i = 0,j = 0; j < n; j++){
        cnt[a[j]]++;
        if(mp[a[j]]>=cnt[a[j]])c++;
        if(j-i+1==m){
            if(c>=k)ans++;
            cnt[a[i]]--;
            if(mp[a[i]]>cnt[a[i]])c--;
            i++;
        }
    }
    cout << ans << endl;
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