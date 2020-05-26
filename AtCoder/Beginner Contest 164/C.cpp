/**
 *  @judge Atcoder
 *  @id C
 *  @name gacha
 *  @contest Beginner Contest 164
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
#define maxN 1000005
#define mod 1000000007

ll all[maxN] = {};
int n;
string s;
void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    map<string, bool> ss;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (ss[s] == false)
        {
            ss[s] = true;
            ans++;
        }
    }
    cout << ans << endl;
}
