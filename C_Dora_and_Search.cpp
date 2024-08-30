#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxn = n;
    int minn = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0, r = n-1;
    while(l<=r){
        if(a[l]==maxn){
            l++;
            maxn--;
        }
        else if(a[r]==maxn){
            r--;
            maxn--;
        }
        else if(a[l]==minn){
            l++;
            minn++;
        }
        else if(a[r]==minn){
            r--;
            minn++;
        }
        else{
            break;
        }
    }
    if(l<=r){
        cout << l+1 << ' ' << r+1 << endl;
    }
    else{
        cout << -1 << endl;
    }
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