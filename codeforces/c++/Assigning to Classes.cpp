/**
 *  @judge CodeForces
 *  @id 1300B
 *  @name Assigning to Classes
 *  @contest Codeforces Round #618
 * 
 *  @tag Greedy, Sort
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
int a[200010] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        //2 3 4 5 8 13 13 16 17 20
        int in1;
        cin >> in1;
        for (int i = 0; i < in1 * 2; i++)
        {
            cin >> a[i];
        }
        sort(a, a + in1 * 2);
        cout << a[in1] - a[in1 - 1] << endl;
    }
}