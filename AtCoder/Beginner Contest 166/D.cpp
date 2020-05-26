/**
 *  @judge Atcoder
 *  @id D
 *  @name I hate Factorization
 *  @contest Beginner Contest 166
 * 
 *  @tag ad-hoc, math
 */
/*這題根本故意的，以為是數學題，被坑了wwww。*/
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

ll n;
ll a = 0, b = 0;
void solve()
{
    cin >> n;
    for (ll i = -126; i <= 126; i++)
    {
        for (ll j = -126; j <= 126; j++)
        {
            if (ll(i * i * i * i * i) - ll(j * j * j * j * j) == n)
            {
                a = i, b = j;
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    cout << a << " " << b << endl;
}
