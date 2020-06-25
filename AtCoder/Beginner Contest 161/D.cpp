/**
 *  @judge Atcoder
 *  @id D
 *  @name Lunlun Number
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
    ll n;
    cin >> n;
    vector<ll> q;
    for (int i = 1; i <= 9; i++)
    {
        q.push_back(i);
    }
    ll start = 0;
    while (start != n - 1)
    {
        ll temp = q[start];

        if (temp % 10 == 0)
        {
            q.push_back(temp * 10);
            q.push_back(temp * 10 + 1);
        }
        else if (temp % 10 == 9)
        {
            q.push_back(temp * 10 + 8);
            q.push_back(temp * 10 + 9);
        }
        else
        {
            q.push_back(temp * 10 + (temp % 10) - 1);
            q.push_back(temp * 10 + (temp % 10));
            q.push_back(temp * 10 + (temp % 10) + 1);
        }
        start++;
    }
    cout << q[start] << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
