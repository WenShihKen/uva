/**
 *  @judge Codeforces
 *  @id 1030A
 *  @name In Search of an Easy Problem
 *  @contest Technocup 2019 - Elimination Round 1
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
#define maxN 1005

int a, all[maxN] = {};

string solve()
{
    for (int i = 0; i < a; i++)
    {
        if (all[i])
        {
            return "HARD";
        }
    }
    return "EASY";
}

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> all[i];
    }
    cout << solve() << endl;
}