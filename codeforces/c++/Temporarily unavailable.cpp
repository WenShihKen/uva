/**
 *  @judge CodeForces
 *  @id 1282A
 *  @name Temporarily unavailable
 *  @contest Codeforces Round #610
 * 
 *  @tag math
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        if (a > b)
        {
            swap(a, b);
        }
        int left = max(a, c - r);
        int right = min(b, c + r);
        cout << b - a - max(0, right - left) << endl;
    }
}