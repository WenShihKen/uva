/**
 *  @judge Codeforces
 *  @id 791A
 *  @name Bear and Big Brother
 *  @contest Codeforces Round #405
 * 
 *  @tag implementation
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

int a, b;

int solve()
{
    int ans = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }
    return ans;
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    cin >> a >> b;
    cout << solve() << endl;
}