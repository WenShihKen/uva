/*
    Author: Ken
    Problems: 1323B
	Tag: ad-hoc, data-structure
*/
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <cmath>
typedef long long int ll;
using namespace std;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[40005] = {};
    ll b[40005] = {};
    map<ll, ll> t1, t2;
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        scanf("%lld", &b[i]);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ll count = 0;
            while (a[i] == 1)
            {
                i++, count++;
            }
            t1[count]++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (b[i] == 1)
        {
            ll count = 0;
            while (b[i] == 1)
            {
                i++, count++;
            }
            t2[count]++;
        }
    }
    for (auto i : t1)
    {
        for (auto j : t2)
        {
            for (ll x = 1; x <= sqrt(k + 0.5); x++)
            {
                if (k % x == 0)
                {
                    ll temp = k / x;
                    //cout<<x<<" "<<temp<<endl;
                    if (i.first >= x && j.first >= temp)
                    {
                        ll left = (i.first - x + 1);
                        ll right = (j.first - temp + 1);
                        ans += (left * right) * i.second * j.second;
                        if (x == temp)
                        {
                            continue;
                        }
                    }
                    if (i.first >= temp && j.first >= x)
                    {
                        ll left = (i.first - temp + 1);
                        ll right = (j.first - x + 1);
                        ans += (left * right) * i.second * j.second;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}