#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


void solve(){
    int n;
    cin >> n; 
    vector<int>a(n);
    for(auto &x:a) cin >> x,x--;
    vector<int>cnt(n,0),last_pos(n,-1),is_last(n,0);
    for(int i = n-1; i >= 0; i--){
        if(!cnt[a[i]]++){
            last_pos[a[i]] = i;
            is_last[i] = 1;
        }
    }
    vector<int>ans;
    multiset<int>num;
    int l = 0, r = -1, flag = 0;
    while(r+1<n){
        while(r+1<n&&(r==-1||!is_last[r])){
            r++;
            if(is_last[last_pos[a[r]]]){
                num.emplace(a[r]);
            }
        }
        if(!num.empty()){
            ans.emplace_back(flag?*begin(num):*rbegin(num)),flag^=1;
            is_last[last_pos[ans.back()]] = 0;
            while(a[l]!=ans.back()){
                
                if(auto it = num.find(a[l++]);it!=end(num)){
                    num.erase(it);
                }
            }
            num.erase(a[l++]);
        }
    }
    cout << ans.size() << endl;
    for(auto x:ans) cout << x+1 << ' ';
    cout << endl;
}

signed main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}