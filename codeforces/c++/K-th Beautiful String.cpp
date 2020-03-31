/**
 *  @judge CodeForces
 *  @id 1328B
 *  @name K-th Beautiful String
 *  @contest Codeforces Round #629
 * 
 *  @tag string, math, binary search
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
#define maxN 200005

//ll a[maxN]= {};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string ss(n, 'a');
        ll temp = 1, count = 0;
        for (ll i = sqrt(k);; i++)
        {
            ll tt = i * (i + 1) / 2;
            if (tt <= k)
            {
                temp = tt;
                count = i;
            }
            else
            {
                break;
            }
        }
        //cout<<temp<<"  "<<count<<endl;
        if (temp == k)
        {
            int t = 0;
            ss[n - count - 1] = 'b', ss[n - count] = 'b';
            cout << ss << endl;
        }
        else
        {
            int t = 0;
            count++;
            t = n - count - 1;
            ss[t] = 'b';
            t++;
            t = t + (count - (k - temp) % count);
            ss[t] = 'b';
            cout << ss << endl;
        }
    }
}