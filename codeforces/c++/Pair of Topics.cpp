/**
 *  @judge CodeForces
 *  @id 1324D
 *  @name Pair of Topics
 *  @contest Codeforces Round #627
 * 
 *  @tag Sort, Two Pointers
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
//-7 -1 0 3 5
int a[200005] = {}, b[200005] = {};
int nn[200005] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        nn[i] = a[i] - b[i];
    }
    sort(nn, nn + n);
    ll ans = 0;
    for (int i = n - 1, j = 0; i >= 0, i > j; i--)
    {
        while (i > j && nn[j] + nn[i] <= 0)
        {
            j++;
        }
        //cout<<j<<"  "<<i<<endl;
        ans += (i - j);
    }
    cout << ans << endl;
}