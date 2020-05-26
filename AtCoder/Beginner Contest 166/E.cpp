/**
 *  @judge Atcoder
 *  @id E
 *  @name This Message Will Self-Destruct in 5s
 *  @contest Beginner Contest 166
 * 
 *  @tag dp
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <iterator>
#include <array>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007

int n;
ll all[maxN] = {};

void solve()
{
    ll ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> all[i];
    }
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        if (m[i - all[i]])
        {
            ans += m[i - all[i]];
        }
        m[i + all[i]]++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
