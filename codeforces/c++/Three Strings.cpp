/**
 *  @judge CodeForces
 *  @id 1301A
 *  @name Three Strings
 *  @contest Codeforces Round #619
 * 
 *  @tag String
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
    int n;
    cin >> n;
    while (n--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        bool f = true;
        for (int i = 0; i < a.length(); i++)
        {
            if (!(a[i] == c[i] || b[i] == c[i]))
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}