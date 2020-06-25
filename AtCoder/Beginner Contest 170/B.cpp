#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define maxN 200005
#define mod 1000000007
#define pi 3.14159265358979323846264338327950

void solve()
{
    int n, k;
    vector<int> all;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        all.push_back(t);
    }
    sort(all.begin(), all.end());
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += all[i];
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
