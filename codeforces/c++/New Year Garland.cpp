/**
 *  @judge CodeForces
 *  @id 1279A
 *  @name New Year Garland
 *  @contest Educational Codeforces Round 79
 * 
 *  @tag Math
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int a[3] = {};
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] + 1 >= a[2])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}