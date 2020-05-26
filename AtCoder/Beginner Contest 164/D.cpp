/**
 *  @judge Atcoder
 *  @id D
 *  @name Multiple of 2019
 *  @contest Beginner Contest 164
 * 
 *  @tag math, dp
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

string s;
map<ll, ll> mm;
ll ans = 0;

void solve()
{
    mm[0] = 1;
    ll ten = 1, st = 0;
    ans = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        st = (st + (s[i] - '0') * ten) % 2019;
        ten *= 10;
        ten %= 2019;
        mm[st]++;
    }
    for (auto i : mm)
    {
        ans += i.second * (i.second - 1) / 2;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    solve();
    cout << ans << endl;
}
