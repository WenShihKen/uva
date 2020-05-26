/**
 *  @judge Atcoder
 *  @id A
 *  @name Lucky 7
 *  @contest Beginner Contest 162
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
#define maxN 200007
#define mod 1000000007

string s;

void solve()
{
    if (s[0] == '7' || s[1] == '7' || s[2] == '7')
    {
        cout << "Yes\n";
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
    cin >> s;
    solve();
}
