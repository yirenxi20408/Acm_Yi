#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int ans = 0;
    for(int i = 0,j=0; i < n; i++){
        sum+=a[i];
        while(sum>r){
            sum-=a[j];
            j++;
        }
        if(sum>=l&&sum<=r){
            ans++;
            sum=0;
            j=i+1;
            continue;
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