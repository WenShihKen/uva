/**
 *  @judge Atcoder
 *  @id B
 *  @name 1%
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

ll in1;
void solve()
{
    cin >> in1;
    ll count = 0, start = 100;
    while (start < in1)
    {
        start += start / 100;
        count++;
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
