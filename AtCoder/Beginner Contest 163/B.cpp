/**
 *  @judge Atcoder
 *  @id B
 *  @name Homework
 *  @contest Beginner Contest 163
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
#define maxN 10005

int n, m;

int solve()
{
    int temp[maxN] = {};
    for (int i = 0; i < m; i++)
    {
        cin >> temp[i];
    }
    for (int i = 0; i < m; i++)
    {

        n -= temp[i];
        if (n < 0)
        {
            return -1;
        }
    }
    return n;
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);

    cin >> n >> m;
    cout << solve() << endl;
}
