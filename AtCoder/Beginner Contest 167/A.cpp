/**
 *  @judge Atcoder
 *  @id A
 *  @name Registration
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

void solve()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
