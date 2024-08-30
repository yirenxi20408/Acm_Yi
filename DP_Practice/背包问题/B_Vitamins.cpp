#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;
signed main(void){
    ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        int price;
        string s;
        cin >> price >> s;
        sort(s.begin(), s.end());
        if(mp[s] == 0) mp[s] = price;
        else mp[s] = min(mp[s], price);
    }
    int ans;
    if(mp["ABC"] == 0) ans = INF;
    else ans = mp["ABC"];
    if(mp["A"] != 0 && mp["B"] != 0 && mp["C"] != 0){
        ans = min(ans, mp["A"] + mp["B"] + mp["C"]);
    } 
    if(mp["AB"] != 0 && mp["C"] != 0){
        ans = min(ans, mp["AB"] + mp["C"]);
    }
    if(mp["BC"] != 0 && mp["A"] != 0){
        ans = min(ans, mp["BC"] + mp["A"]);
    }
    if(mp["B"] != 0 && mp["AC"] != 0){
        ans = min(ans, mp["B"] + mp["AC"]);
    }
    if(mp["AB"] != 0 && mp["BC"] != 0){
        ans = min(ans, mp["AB"] + mp["BC"]);
    }
    if(mp["AB"] != 0 && mp["AC"] != 0){
        ans = min(ans, mp["AB"] + mp["AC"]);
    }
    if(mp["AC"] != 0 && mp["BC"] != 0){
        ans = min(ans, mp["BC"] + mp["AC"]);
    }
    if(ans == INF) ans = -1;
    std::cout << ans << endl;
    return 0;
}