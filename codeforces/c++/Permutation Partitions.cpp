/**
 *  @judge CodeForces
 *  @id 1326C
 *  @name Permutation Partitions
 *  @contest Codeforces Global Round 7
 * 
 *  @tag Math, greedy, combinatorics
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    ll a1 = (n + (n - k + 1)) * k / 2, a2 = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> t;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > n - k)
        {
            t.push_back(i);
        }
    }
    for (int i = 0; i < t.size() - 1; i++)
    {
        a2 = a2 * (t[i + 1] - t[i]) % 998244353;
    }
    cout << a1 << " " << a2 << endl;
}