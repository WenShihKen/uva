/**
 *  @judge CodeForces
 *  @id 1327A
 *  @name Sum of Odd Integers
 *  @contest Educational Codeforces Round 84
 * 
 *  @tag Math
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll temp = ((1 + 2 * m - 1) * m / 2);
        if (m % 2)
        {
            if (n >= temp && n % 2 == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if (n >= temp && n % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}