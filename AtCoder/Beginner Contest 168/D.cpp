/**
 *  @judge Atcoder
 *  @id D
 *  @name  .. (Double Dots)
 *  @contest Beginner Contest 168
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
#include <iomanip>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

int n, m;
int vis[maxN] = {};

void solve()
{
    cin >> n >> m;
    vector<vector<int>> graph(maxN);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vis[1] = 1;
    //
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (auto i : graph[now])
        {
            if (!vis[i])
            {
                vis[i] = now;
                q.push(i);
            }
        }
    }
    bool check = true;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "Yes\n";
        for (int i = 2; i <= n; i++)
        {
            cout << vis[i] << endl;
        }
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
