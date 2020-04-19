/**
 *  @judge Codeforces
 *  @id 785A
 *  @name Anton and Polyhedrons
 *  @contest Codeforces Round #404
 * 
 *  @tag ad-hoc, string
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

int ans = 0, a;
string ss;
map<char, int> m;
void solve()
{
    ans = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> ss;
        ans += m[ss[0]];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    m['T'] = 4;
    m['C'] = 6;
    m['O'] = 8;
    m['D'] = 12;
    m['I'] = 20;
    solve();
    cout << ans << endl;
}