/**
 *  @judge CodeForces
 *  @id 1283B
 *  @name Candies Division
 *  @contest Codeforces Round #611
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
        ll n, k;
        cin >> n >> k;
        ll nn = n / k * k;
        n -= nn;
        cout << nn + min(n, k / 2) << endl;
    }
}