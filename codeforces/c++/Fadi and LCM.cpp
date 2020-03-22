/**
 *  @judge CodeForces
 *  @id 1285C
 *  @name Fadi and LCM
 *  @contest Codeforces Round #613
 * 
 *  @tag math
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
const int maxN = 2e5;
int a[maxN] = {};

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    ll t;
    cin >> t;
    ll a1 = 1, a2 = t;
    for (ll i = 2; i * i <= t; i++)
    {
        if (t % i == 0)
        {
            if (i * (t / i) * gcd(i, (t / i)) == t)
            {
                a1 = i, a2 = t / i;
            }
        }
    }
    cout << a1 << " " << a2 << endl;
}