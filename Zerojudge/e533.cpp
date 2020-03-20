/**
 *  @judge Zerojudge
 *  @id e533
 *  @name Lumberjack Sequencing
 * 
 *  @tag Ad-hoc
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cout << "Lumberjacks:\n";
    while (t--)
    {
        bool lower = true, greater = true;
        int mi = 99999, ma = -99999, in1;
        for (int i = 0; i < 10; i++)
        {
            cin >> in1;
            if (in1 > ma)
            {
                ma = in1;
            }
            else
            {
                greater = false;
            }
            if (in1 < mi)
            {
                mi = in1;
            }
            else
            {
                lower = false;
            }
        }
        if (lower == true || greater == true)
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
}