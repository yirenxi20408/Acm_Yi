#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    if ((n / 2 + 1) % 2 == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << n - i + 1 << " ";
            }
            else
            {
                cout << i << " ";
            }
        }
    }
    else{
        for (int i = 1; i <= n-1; i++)
        {
            if (i % 2 == 0)
            {
                cout << i - 1 << " ";
            }
            else
            {
                cout << i + 1 << " ";
            }
        }
        cout << n;
    }
    cout << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}