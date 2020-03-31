/**
 *  @judge CodeForces
 *  @id 1328C
 *  @name Ternary XOR
 *  @contest Codeforces Round #629
 * 
 *  @tag greedy
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
#define maxN 200005

//ll a[maxN]= {};

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
        string s;
        cin >> s;
        string a, b;
        a.resize(s.length(), '0');
        b.resize(s.length(), '0');
        bool check = false;
        for (int i = 0; i != s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (!check)
                {
                    a[i] = '1';
                }
                else
                {
                    b[i] = '1';
                }
                check = true;
            }
            else if (s[i] == '2')
            {
                if (check)
                {
                    b[i] = '2';
                }
                else
                {
                    a[i] = b[i] = '1';
                }
            }
        }
        cout << a << endl
             << b << endl;
    }
}