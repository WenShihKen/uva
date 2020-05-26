/**
 *  @judge Atcoder
 *  @id D
 *  @name RGB Triplets
 *  @contest Beginner Contest 162
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
#include <iterator>
#include <array>
typedef long long int ll;
using namespace std;
#define maxN 1000005
#define mod 1000000007

//ll all[maxN]= {};
int n;
string s;

void solve()
{
    ll ans = 0;
    ll r, g, b;
    r = g = b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
        {
            r++;
        }
        else if (s[i] == 'G')
        {
            g++;
        }
        else if (s[i] == 'B')
        {
            b++;
        }
    }
    ans = r * g * b;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            int temp = 2 * i + j;
            if (temp < s.length())
            {
                if (s[i + j] != s[j] && s[i + j] != s[temp] && s[j] != s[temp])
                {
                    ans--;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    solve();
}
