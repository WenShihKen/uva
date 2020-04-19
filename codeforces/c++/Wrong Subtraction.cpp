/**
 *  @judge Codeforces
 *  @id 977A
 *  @name Wrong Subtraction
 *  @contest Codeforces Round #479
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
#define maxN 1005

int a, b;

void solve()
{
    while (a > 0 && b > 0)
    {
        if (b >= (a % 10 + 1))
        {
            b -= (a % 10 + 1);
            a /= 10;
        }
        else
        {
            a -= b;
            b = 0;
        }
    }
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    cin >> a >> b;
    solve();
    cout << a << endl;
}