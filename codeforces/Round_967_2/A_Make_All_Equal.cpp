#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    if(n==1){
        std::cout << 0 << endl;
        return;
    }
    int ans = 0;
    for(auto i : mp){
        ans = max(ans,i.second);
        // std::cout << i.first << " " << i.second << endl;
    }
    std::cout << n-ans << endl;
}

signed main(void){
    ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
}