/**
 *  @judge Atcoder
 *  @id A
 *  @name We Love Golf
 *  @contest Beginner Contest 165
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

int in1;
int n, m;

void solve()
{
    cin >> in1 >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (i % in1 == 0)
        {
            cout << "OK\n";
            return;
        }
    }
    cout << "NG\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
