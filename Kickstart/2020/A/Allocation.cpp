/**
 *  @judge Google Kickstart
 *  @id A
 *  @name Allocation
 *  @contest RoundA
 * 
 *  @tag sort
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
const ll maxN = 2e5;
int a[maxN] = {};
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, all;
        cin >> n >> all;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        for (int j = 0; j < n; j++)
        {
            all -= a[j];
            if (all >= 0)
            {
                count++;
            }
        }
        printf("Case #%d: %d\n", i, count);
    }
}