/**
 *  @judge CodeForces
 *  @id 1328A
 *  @name Divisibility Problem
 *  @contest Codeforces Round #629
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
typedef long long int ll;
using namespace std;
#define maxN 200005

ll a[maxN] = {};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n % m == 0)
        {
            cout << 0 << endl;
            continue;
        }
        cout << m - (n % m) << endl;
    }
}