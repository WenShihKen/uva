/**
 *  @judge Atcoder
 *  @id B
 *  @name Trick or Treat
 *  @contest Beginner Contest 166
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
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007

int a, b;
int d;
bool check[105] = {};
void solve()
{
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            int sn;
            cin >> sn;
            check[sn] = true;
        }
    }
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        if (check[i] == false)
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
