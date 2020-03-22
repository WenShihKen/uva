/**
 *  @judge CodeForces
 *  @id 1285D
 *  @name Dr. Evil Underscores
 *  @contest Codeforces Round #613
 * 
 *  @tag bitmasks, dfs
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
const ll maxN = 2e5;

ll dfs(ll bit, vector<ll> &a)
{
    if (a.size() == 0 || bit < 0)
    {
        return 0;
    }
    vector<ll> a0, a1;
    for (auto i : a)
    {
        if ((i >> bit) & 1)
        {
            a1.push_back(i);
        }
        else
        {
            a0.push_back(i);
        }
    }
    if (a0.size() == 0)
    {
        return dfs(bit - 1, a1);
    }
    if (a1.size() == 0)
    {
        return dfs(bit - 1, a0);
    }
    return min(dfs(bit - 1, a1), dfs(bit - 1, a0)) + ll(1 << bit);
}

int main()
{
    ll t;
    cin >> t;
    vector<ll> a;
    ll bit = 0, m = -1;
    for (ll i = 0; i < t; i++)
    {
        ll in1;
        cin >> in1;
        a.push_back(in1);
        m = max(m, in1);
    }
    while (m)
    {
        m >>= 1;
        bit++;
    }
    cout << dfs(bit, a) << endl;
}