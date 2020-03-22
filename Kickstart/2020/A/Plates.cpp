/**
 *  @judge Google Kickstart
 *  @id B
 *  @name Plates
 *  @contest RoundA
 * 
 *  @tag dp
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
const ll maxN = 2010;
ll a[maxN][maxN] = {}, dp[maxN][maxN] = {};
int main()
{
    ll t;
    cin >> t;
    for (ll c = 1; c <= t; c++)
    {
        int n, k, p;
        cin >> n >> k >> p;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                ll in1;
                cin >> in1;
                a[i][j] = a[i][j - 1] + in1;
            }
        }
        ll ans = 0;
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= p; ++j)
            {
                dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                for (int m = j; m <= p; m++)
                {
                    dp[i][m] = max(dp[i][m], dp[i - 1][m - j] + a[i][j]);
                    ans = max(ans, dp[i][m]);
                }
            }
        }
        printf("Case #%lld: %lld\n", c, ans);
    }
}