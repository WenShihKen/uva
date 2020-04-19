/**
 *  @judge Codeforces
 *  @id 705A
 *  @name Hulk
 *  @contest Codeforces Round #366
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
#define maxN 1005

int a;
string ans;

void solve()
{
    ans = "I hate ";
    for (int i = 2; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            ans += "that I love ";
        }
        else
        {
            ans += "that I hate ";
        }
    }
    ans += "it";
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    cin >> a;
    solve();
    cout << ans << endl;
}