/**
 *  @judge Atcoder
 *  @id C
 *  @name Sum of gcd of Tuples (Easy)
 *  @contest Beginner Contest 162
 * 
 *  @tag ad-hoc
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
#define maxN 1000005
#define mod 1000000007

ll all[maxN] = {};
int s;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve()
{
    int ans = 0;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            for (int k = 1; k <= s; k++)
            {
                int temp = i;
                temp = gcd(temp, j);
                temp = gcd(temp, k);
                ans += temp;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    solve();
}
