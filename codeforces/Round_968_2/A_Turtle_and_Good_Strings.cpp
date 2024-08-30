#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 1){
        cout << "NO" << endl;
        return ;
    }
    if(s[0]==s[n-1]){
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
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