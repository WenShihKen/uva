/**
 *  @judge Atcoder
 *  @id C
 *  @name : (Colon)
 *  @contest Beginner Contest 168
 * 
 *  @tag math
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
    double a, b, h, m;
    cin >> a >> b >> h >> m;
    double angle = (30 * h - 5.5 * m) * pi / 180.0;
    double ans = a * a + b * b - 2 * a * b * cosl(angle);
    cout << fixed << setprecision(20) << sqrt(ans) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
