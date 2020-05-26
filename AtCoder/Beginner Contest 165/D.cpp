/**
 *  @judge Atcoder
 *  @id D
 *  @name Floor Function
 *  @contest Beginner Contest 165
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
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007

ll a, b, n;
void solve()
{
    cin >> a >> b >> n;
    ll temp = min(b - 1, n);
    cout << ll(a * temp / b);
    //後面的floor = 0所以直接忽略
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}