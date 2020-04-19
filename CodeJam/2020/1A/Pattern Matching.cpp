/**
 *  @judge Code Jam 2020
 *  @id PA
 *  @name Pattern Matching
 *  @contest Round 1A 2020
 * 
 *  @tag simulation, string
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

string in[55] = {};
int t, n;

void solve()
{
    //cout<<endl;
    string tpre[55] = {}, tsuf[55] = {};
    for (int i = 0; i < n; i++)
    {
        for (;;)
        {
            if (in[i][0] == '*')
            {
                break;
            }
            else
            {
                tpre[i] += in[i][0];
            }
            in[i].erase(in[i].begin());
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (;;)
        {
            if (in[i].back() == '*')
            {
                break;
            }
            else
            {
                tsuf[i] += in[i].back();
            }
            in[i].pop_back();
        }
    }
    //	for(int i=0;i<n;i++){
    //		cout<<in[i]<<endl;
    //	}
    string lpre = "", lsuf = "";
    for (int i = 0; i < n; i++)
    {
        if (tpre[i].length() > lpre.length())
        {
            lpre = tpre[i];
        }
        if (tsuf[i].length() > lsuf.length())
        {
            lsuf = tsuf[i];
        }
    }
    //check prefix
    for (int i = 0; i < n; i++)
    {
        if (lpre.rfind(tpre[i], 0) != 0)
        {
            cout << "*\n";
            return;
        }
    }
    //check suffix
    for (int i = 0; i < n; i++)
    {
        if (lsuf.rfind(tsuf[i], 0) != 0)
        {
            cout << "*\n";
            return;
        }
    }
    string ans = "";
    ans = lpre;
    for (int i = 0; i < n; i++)
    {
        for (auto j : in[i])
        {
            if (j != '*')
            {
                ans += j;
            }
        }
    }
    reverse(lsuf.begin(), lsuf.end());
    ans += lsuf;
    cout << ans << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> in[j];
        }
        cout << "Case #" << i << ": ";
        solve();
    }
}