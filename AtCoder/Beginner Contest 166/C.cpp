/**
 *  @judge Atcoder
 *  @id C
 *  @name Peaks
 *  @contest Beginner Contest 166
 * 
 *  @tag graph
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
#define maxN 200005
#define mod 1000000007
int n, m;
int nn[maxN] = {};

void solve()
{
    cin >> n >> m;
    vector<vector<int>> route(n);
    set<int> check;
    for (int i = 0; i < n; i++)
    {
        cin >> nn[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        route[a - 1].push_back(b - 1);
        route[b - 1].push_back(a - 1);
        check.insert(a - 1);
        check.insert(b - 1);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool vis = true;
        if (check.count(i) == 0)
        {
            ans++;
            continue;
        }
        for (int j = 0; j < route[i].size(); j++)
        {
            if (nn[i] <= nn[route[i][j]])
            {
                vis = false;
                break;
            }
        }
        if (vis)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
