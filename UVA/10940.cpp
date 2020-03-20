/**
 *  @judge UVA
 *  @id 10940
 *  @name Throwing cards away II
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
int a[500010] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    a[1] = 1;
    a[2] = 2;
    int count = 2;
    for (int i = 3; i <= 500000;)
    {
        for (int j = 1; j <= count && i <= 500000; j++, i++)
        {
            a[i] = 2 * j;
        }
        count *= 2;
    }
    int n;
    while (cin >> n && n != 0)
    {
        cout << a[n] << endl;
    }
}