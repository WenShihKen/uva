/**
 *  @judge CodeForces
 *  @id 1282B1
 *  @name K for the Price of One (Easy Version)
 *  @contest Codeforces Round #610
 * 
 *  @tag greedy, dp, sort
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
int a[200010] = {};
int buy[200010] = {};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i <= n; i++)
        {
            buy[i] = buy[i - 1] + a[i - 1];
        }
        for (int i = 2; i <= n; i++)
        {
            buy[i] = buy[i - 2] + a[i - 1];
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (p >= buy[i])
            {
                ans = i;
            }
        }
        if (ans == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}