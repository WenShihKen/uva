/**
 *  @judge Atcoder
 *  @id B
 *  @name Battle
 *  @contest Beginner Contest 164
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
int a, b, c, d;
void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    int win = 0;
    int turn = 0;
    while (1)
    {
        if (turn == 0)
        {
            turn = 1;
            c -= b;
            if (c <= 0)
            {
                win = 1;
                break;
            }
        }
        else
        {
            turn = 0;
            a -= d;
            if (a <= 0)
            {
                win = 2;
                break;
            }
        }
    }
    if (win == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
