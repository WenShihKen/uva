/**
 *  @judge Atcoder
 *  @id B
 *  @name FizzBuzz Sum
 *  @contest Beginner Contest 162
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
#define maxN 1000005
#define mod 1000000007

ll all[maxN] = {};
int s;

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    all[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            all[i] = all[i - 1] + i;
        }
        else
        {
            all[i] = all[i - 1];
        }
    }
    cin >> s;
    cout << all[s] << endl;
}
