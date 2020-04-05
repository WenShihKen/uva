/**
 *  @judge Code Jam 2020
 *  @id PC
 *  @name Parenting Partnering Returns
 *  @contest Qualification Round 2020
 *
 *  @tag simulation, sort, implementation
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <iterator>
#include <array>
typedef long long int ll;
using namespace std;
#define maxN 1005

int n;
array<int, 3> sch[maxN] = {};
string ans;
bool f = true;

bool cmp(array<int, 3> &a, array<int, 3> &b)
{
    if (a[0] == b[0])
    {
        return a[1] < b[1];
    }
    return a[0] < b[0];
}

void solve()
{
    f = true;
    ans = "";
    string temp(n, ' ');
    if (n == 2)
    {
        ans = "CJ";
        return;
    }
    int c[2] = {-1, -1}, j[2] = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        if (c[1] <= sch[i][0])
        {
            c[0] = sch[i][0], c[1] = sch[i][1];
            temp[sch[i][2]] = 'C';
            continue;
        }
        if (j[1] <= sch[i][0])
        {
            j[0] = sch[i][0], j[1] = sch[i][1];
            temp[sch[i][2]] = 'J';
            continue;
        }
        f = false;
        return;
    }
    ans = temp;
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
        for (int i = 0; i < n; i++)
        {
            cin >> sch[i][0] >> sch[i][1];
            sch[i][2] = i;
        }
        sort(sch, sch + n, cmp);
        solve();
        printf("Case #%d: ", count);
        if (f)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "IMPOSSIBLE\n";
        }
    }
}