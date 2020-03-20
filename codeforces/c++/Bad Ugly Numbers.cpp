/**
 *  @judge CodeForces
 *  @id 1326A
 *  @name Bad Ugly Numbers
 *  @contest Codeforces Global Round 7
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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << 3;
            }
            cout << 4 << endl;
        }
    }
}