/*
    Author: Ken
    Problems: 1323A
	Tag: ad-hoc
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
        int n;
        cin >> n;
        int all[105] = {};
        bool check = false;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> all[i];
            if (all[i] % 2 == 0)
            {
                ans = i;
                check = true;
            }
        }
        if (check)
        {
            cout << 1 << endl;
            cout << ans + 1 << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << "1 2" << endl;
            }
        }
    }
}