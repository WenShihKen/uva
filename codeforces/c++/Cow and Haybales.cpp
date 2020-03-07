/*
    Author: Ken
    Problems: 1307A
	Tag: ad-hoc, greedy
*/
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        int pile[105] = {};
        cin >> n >> d;
        for (int i = 0; i < n; i++)
            cin >> pile[i];
        int ans = pile[0];
        if (n == 1)
        {
            cout << pile[0] << endl;
        }
        else
        {
            for (int i = 1; i < n && d > 0; i++)
            {
                int temp = i * pile[i];
                d -= temp;
                ans += pile[i];
                if (d <= 0)
                {
                    while (d < 0)
                    {
                        d += i;
                        ans--;
                    }
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}