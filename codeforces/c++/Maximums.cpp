/**
 *  @judge CodeForces
 *  @id 1326B
 *  @name Maximums
 *  @contest Codeforces Global Round 7
 * 
 *  @tag ad-hoc
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
ll a[200005] = {};
ll ans[200005] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    while (cin >> t)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        ans[0] = a[0];
        ans[1] = a[1] + ans[0];
        ll mm = max(ans[0], ans[1]);
        for (int i = 2; i < t - 1; i++)
        {
            ans[i] = mm + a[i];
            mm = max(ans[i], mm);
        }
        ans[t - 1] = a[t - 1] + mm;
        for (int i = 0; i < t; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}