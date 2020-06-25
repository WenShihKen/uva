#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    int n, temp = 0;
    cin >> n;
    vector<int> all;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        all.push_back(t);
        temp ^= t;
    }
    for (int i = 0; i < n; i++)
    {
        cout << (temp ^ all[i]) << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}