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
    string s;
    while (n != 0)
    {
        int temp = n % 26;
        if (temp == 0)
        {
            s += 'z';
            n -= 26;
        }
        else
        {
            s += ('a' + (temp - 1));
        }
        n /= 26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
