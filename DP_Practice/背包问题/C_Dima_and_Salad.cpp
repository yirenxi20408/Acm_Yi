#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4, maxw = 1e5;
const int inf = -1e5;
int cal[maxn], tas[maxn], n, k;
int dp1[maxw], dp2[maxw];

int main(void)
{
    std::cin >> n >> k;
    for (int i = 1; i <= n; i++)
        std::cin >> tas[i];
    for (int i = 1; i <= n; i++)
        std::cin >> cal[i];
    for (int i = 0; i < maxw; i++)
    {
        dp1[i] = inf;
        dp2[i] = inf;
    }
    dp1[0] = dp2[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int cost = tas[i] - k * cal[i], val = tas[i];
        if (cost < 0)
        {
            cost *= -1;
            for (int j = maxw - 1; j >= cost; j--)
                dp1[j] = max(dp1[j], dp1[j - cost] + val);
        }
        else
        {
            for (int j = maxw - 1; j >= cost; j--)
                dp2[j] = max(dp2[j], dp2[j - cost] + val);
        }
    }

    int ans = 0;
    for (int i = 0; i < maxw; i++)
        ans = max(ans, dp1[i] + dp2[i]);
    cout << ((ans == 0) ? -1 : ans) << endl;

    return 0;
}

//memset()赋值是按字节赋值的，所以只可以用来赋值0和-1，不能赋其他值