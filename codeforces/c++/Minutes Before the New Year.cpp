/**
 *  @judge CodeForces
 *  @id 1283A
 *  @name Minutes Before the New Year
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
        int a, b;
        cin >> a >> b;
        cout << 1440 - (a * 60 + b * 1) << endl;
    }
}