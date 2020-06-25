/**
 *  @judge Atcoder
 *  @id D
 *  @name Teleporter
 *  @contest Beginner Contest 167
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
#include <array>
#include <iomanip>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

ll all[maxN] = {};
bool vis[maxN] = {};

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> all[i];
    }
    vis[1] = true;
    int now = 1;
    while (1)
    {
        now = all[now];
        if (vis[now])
        {
            break;
        }
        vis[now] = true;
    }
    //cout<<"start: "<<now<<endl;
    int start = now;
    for (int i = 0; i <= n; i++)
    {
        vis[i] = 0;
    }
    vector<int> path;
    while (1)
    {
        path.push_back(start);
        vis[start] = true;
        start = all[start];
        if (vis[start])
        {
            break;
        }
    }
    // for (auto i : path)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << path.size() << endl;
    for (int i = 0; i <= n; i++)
    {
        vis[i] = 0;
    }
    int temp = 1;
    while (1)
    {
        if (temp == now)
        {
            break;
        }
        temp = all[temp];
        if (k == 1)
        {
            cout << temp << endl;
            return;
        }
        k--;
    }
    cout << path[k % path.size()] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
