/**
 *  @judge Codeforces
 *  @id 996A
 *  @name Hit the Lottery
 *  @contest Codeforces Round #492
 * 
 *  @tag dp, greedy
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

int a[5] = {1, 5, 10, 20, 100};
int in1, ans;

void solve()
{
    ans = 0;
    for (int i = 4; i >= 0; i--)
    {
        if (in1 >= a[i])
        {
            ans += in1 / a[i];
            in1 %= a[i];
        }
        if (in1 == 0)
        {
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> in1;
    solve();
    cout << ans << endl;
}