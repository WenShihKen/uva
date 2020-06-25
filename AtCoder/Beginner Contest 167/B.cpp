/**
 *  @judge Atcoder
 *  @id B
 *  @name Easy Linear Programming
 *  @contest Beginner Contest 167
 * 
 *  @tag ad-hoc, math
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
#include <iomanip>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    ll a, b, c, k, ans = 0;
    cin >> a >> b >> c >> k;
    if (k >= a)
    {
        ans += a, k -= a;
    }
    else
    {
        cout << k << endl;
        return;
    }
    if (k >= b)
    {
        k -= b;
    }
    else
    {
        cout << ans << endl;
        return;
    }
    if (k >= c)
    {
        k -= c;
        ans -= c;
    }
    else
    {
        cout << ans - k << endl;
        return;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
