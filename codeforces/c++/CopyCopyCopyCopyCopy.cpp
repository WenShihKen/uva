/**
 *  @judge CodeForces
 *  @id 1325B
 *  @name CopyCopyCopyCopyCopy
 *  @contest Codeforces Round #628
 * 
 *  @tag Greedy
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <cmath>
typedef long long int ll;
using namespace std;
int aa[100005] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> cc;
        for (int i = 0; i < n; i++)
        {
            cin >> aa[i];
        }
        for (int i = 0; i < n; i++)
        {
            cc.insert(aa[i]);
        }
        cout << cc.size() << endl;
    }
}