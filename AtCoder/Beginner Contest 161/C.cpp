/**
 *  @judge Atcoder
 *  @id C
 *  @name Replacing Integer
 *  @contest Beginner Contest 161
 * 
 *  @tag ad-hoc
 */
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << min(n, m - n % m) << endl;
        return;
    }
    ll temp = n % m;
    cout << min(temp, m - temp) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
