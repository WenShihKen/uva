/**
 *  @judge Atcoder
 *  @id A
 *  @name ∴ (Therefore)
 *  @contest Beginner Contest 168
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

void solve()
{
    int n;
    cin >> n;
    string s[10] = {"pon", "pon", "hon", "bon", "hon", "hon", "pon", "hon", "pon", "hon"};
    cout << s[n % 10] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
