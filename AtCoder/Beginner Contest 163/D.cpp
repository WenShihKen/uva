/**
 *  @judge Atcoder
 *  @id D
 *  @name Sum of Large Numbers
 *  @contest Beginner Contest 163
 * 
 *  @tag math
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
#define maxN 200007
#define mod 1000000007

ll n, m;

ll cal(int a, int b)
{
    ll temp = b - (a - 1);
    return (a + b) * temp / 2;
}

ll solve()
{
    ll ans = 0;
    if (n + 1 == m)
    {
        return 1;
    }
    for (int i = m; i <= n + 1; i++)
    {
        ll low = cal(0, i - 1);
        ll high = cal(n - (i - 1), n);
        //cout<<low<<" "<<high<<endl;
        ans += (high - low) + 1;
        if (ans > mod)
        {
            ans %= mod;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cout << solve() << endl;
}
