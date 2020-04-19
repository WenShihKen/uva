/**
 *  @judge Code Jam 2020
 *  @id PA
 *  @name Vestigium
 *  @contest Qualification Round 2020
 * 
 *  @tag ad-hoc
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

int a[maxN][maxN] = {};
int n;
int k, r, c;

void solve()
{
    k = 0, r = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        k += a[i][i];
    }
    //r
    for (int i = 1; i <= n; i++)
    {
        int temp[maxN] = {};
        for (int j = 1; j <= n; j++)
        {
            temp[a[i][j]]++;
        }
        for (int j = 0; j <= n; j++)
        {
            if (temp[j] > 1)
            {
                r++;
                break;
            }
        }
    }
    //c
    for (int i = 1; i <= n; i++)
    {
        int temp[maxN] = {};
        for (int j = 1; j <= n; j++)
        {
            temp[a[j][i]]++;
        }
        for (int j = 0; j <= n; j++)
        {
            if (temp[j] > 1)
            {
                c++;
                break;
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
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        solve();
        printf("Case #%d: %d %d %d\n", count, k, r, c);
    }
}