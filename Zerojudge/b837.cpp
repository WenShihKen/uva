/**
 *  @judge Zerojudge
 *  @id b837
 *  @name 104北二1費氏數列
 *  @contest 
 * 
 *  @tag dp
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
    ll f[100] = {};
    f[0] = 0, f[1] = 1, f[2] = 1, f[3] = 2;
    for (int i = 4; i <= 76; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        for (int i = 0; i <= 76; i++)
        {
            if (f[i] >= a && f[i] <= b)
            {
                cout << f[i] << endl;
                count++;
            }
        }
        cout << count << endl;
        if (t)
        {
            cout << "------\n";
        }
    }
}