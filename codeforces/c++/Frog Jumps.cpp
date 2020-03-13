/**
 *  @judge CodeForces
 *  @id 1324C
 *  @name Frog Jumps
 *  @contest Codeforces Round #627
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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int place = -1, ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                ans = max(ans, i - place);
            }
            else
            {
                place = i;
            }
        }
        cout << ans + 1 << endl;
    }
}