#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, coin;
    cin >> n >> coin;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for (auto i : mp)
    {
        int x = i.first;
        if (mp.count(x + 1))
        {
            int temp = mp[x]*x + mp[x + 1]*(x + 1);
            if (temp <= coin)
            {
                ans = max(ans, temp);
            }
            else{
                while(temp > coin){
                    if(mp[x] > 1){
                        temp -= x;
                        mp[x]--;
                    }
                    else if(mp[x + 1] > 1){
                        temp -= x + 1;
                        mp[x + 1]--;
                    }
                }
                ans = max(ans, temp);
            }
        }
        else{
            int temp = mp[x]*x;
            if(temp <= coin){
                ans = max(ans, temp);
            }
            else{
                while(temp > coin){
                    if(mp[x] > 1){
                        temp -= x;
                        mp[x]--;
                    }
                }
                ans = max(ans, temp);
            }
        }
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}