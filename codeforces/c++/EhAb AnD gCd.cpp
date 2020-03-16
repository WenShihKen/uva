/**
 *  @judge CodeForces
 *  @id 1325A
 *  @name EhAb AnD gCd
 *  @contest Codeforces Round #628
 * 
 *  @tag Greedy
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << "1 1\n";
        }
        else
        {
            cout << 1 << " " << n - 1 << endl;
        }
    }
}