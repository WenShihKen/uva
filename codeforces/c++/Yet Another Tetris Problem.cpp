/**
 *  @judge CodeForces
 *  @id 1324A
 *  @name Yet Another Tetris Problem
 *  @contest Codeforces Round #627
 * 
 *  @tag Ad-hoc
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int all[105] = {};
        int m = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> all[i];
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        else if (n == 2)
        {
            if ((abs(all[0] - all[1]) % 2 == 0))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            continue;
        }
        bool a = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (all[i] % 2 != all[i + 1] % 2)
            {
                a = false;
            }
        }
        if (a)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}