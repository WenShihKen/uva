#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    map<ll, ll> all;
    ll n, q;
    ll sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        sum += temp;
        all[temp]++;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll origin, replace;
        cin >> origin >> replace;
        if (all[origin] == 0)
        {
            cout << sum << endl;
            continue;
        }
        else
        {
            sum -= origin * all[origin];
            sum += replace * all[origin];
            all[replace] += all[origin];
            all[origin] = 0;
            cout << sum << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
