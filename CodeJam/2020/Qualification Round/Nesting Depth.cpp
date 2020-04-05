/**
 *  @judge Code Jam 2020
 *  @id PB
 *  @name Nesting Depth
 *  @contest Qualification Round 2020
 * 
 *  @tag simulation, string
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <iterator>
typedef long long int ll;
using namespace std;
#define maxN 105

string ss, ans;

void solve()
{
    ans = "";
    int nest = 0;
    for (int i = 0; i < ss.length(); i++)
    {
        int temp = ss[i] - '0';
        while (nest < temp)
        {
            ans += '(';
            nest++;
        }
        while (nest > temp)
        {
            ans += ')';
            nest--;
        }
        ans += ss[i];
        //last
        if (i == ss.length() - 1)
        {
            while (nest--)
            {
                ans += ')';
            }
        }
    }
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    int t;
    cin >> t;
    for (int count = 1; count <= t; count++)
    {
        cin >> ss;
        solve();
        printf("Case #%d: ", count);
        cout << ans << endl;
    }
}