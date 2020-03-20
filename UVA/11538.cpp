/**
 *  @judge UVA
 *  @id 11538
 *  @name Chess Queen
 * 
 *  @tag math, combination
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
int main()
{
    ll n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        if (n > m)
        {
            n ^= m ^= n ^= m;
        }
        printf("%lld\n", n * m * (n - 1) + n * m * (m - 1) + ((2 * n * (n - 1) * (n - 2) / 6) + (m - n + 1) * n * (n - 1) / 2) * 4);
    }
}