/**
 *  @judge CodeForces
 *  @id 1284A
 *  @name New Year and Naming
 *  @contest Hello 2020
 * 
 *  @tag string
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
    int n, m;
    cin >> n >> m;
    string a[25], b[25];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int year;
        cin >> year;
        cout << a[(year - 1) % n] << b[(year - 1) % m] << endl;
    }
}