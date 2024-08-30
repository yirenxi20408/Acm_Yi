#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a){
        cin >> i;
    }
    sort(a.begin(),a.end());
    if(n&1)    cout << a[(n-1)/2] << endl;
    else    cout << a[n/2] << endl;
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