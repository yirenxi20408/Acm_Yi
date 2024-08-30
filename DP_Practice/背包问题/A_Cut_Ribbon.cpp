#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// signed main(void){
//     ios::sync_with_stdio(0);
//     std::cin.tie(0);
//     std::cout.tie(0);
//     int n;
//     vector<int> a(3);
//     cin >> n >> a[0] >> a[1] >> a[2];
//     sort(a.begin(), a.end());
//     int ans = 0;
//     if(n % a[0] == 0){
//         ans = n/a[0];
//         cout << ans << endl;
//         return 0;
//     }
//     for(int i = 0; i <= n/a[2]+1; i++){
//         for(int j = 0; j <= n/a[1]+1; j++){
//             for(int k = 0; k <= n/a[0]+1; k++)
//             {
//                 if(i*a[2] + j*a[1] + k*a[0] == n){
//                     ans = max(ans, i+j+k);
//                 }
//                 else if(i*a[2] + j*a[1] + k*a[0] > n){
//                     break;
//                 }
//             }
//             if(i*a[2] + j*a[1] > n){
//                 break;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }
signed main(void){
    ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n;
    vector<int> a(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j)
    }
    return 0;
}