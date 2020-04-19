/**
 *  @judge Atcoder
 *  @id C
 *  @name management
 *  @contest Beginner Contest 163
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

int n;

void solve()
{
    int temp[maxN] = {};
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        temp[a]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << temp[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    solve();
}
