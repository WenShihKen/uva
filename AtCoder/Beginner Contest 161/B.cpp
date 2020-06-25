/**
 *  @judge Atcoder
 *  @id B
 *  @name Popular Vote
 *  @contest Beginner Contest 161
 * 
 *  @tag ad-hoc
 */
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    int n, m;
    cin >> n >> m;
    int all[105] = {}, vote = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> all[i];
        vote += all[i];
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (all[i] * (4 * m) >= vote)
        {
            temp++;
        }
    }
    if (temp >= m)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
