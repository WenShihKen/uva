/**
 *  @judge CodeForces
 *  @id 1285B
 *  @name Just Eat It!
 *  @contest Codeforces Round #613
 * 
 *  @tag greedy, dp
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long ll;
using namespace std;
const ll maxN = 2e5;
ll a[maxN] = {};
bool check(ll n)
{
    ll s = 0;
    for (ll i = 1; i <= n; i++)
    {
        s += a[i];
        if (s <= 0)
        {
            return 0;
        }
    }
    s = 0;
    for (ll i = n; i >= 1; i--)
    {
        s += a[i];
        if (s <= 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (check(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}