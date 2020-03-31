#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
#include <iterator>
typedef long long int ll;
using namespace std;
#define maxN 200005

//ll a[maxN]= {};

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    ll t;
    cin >> t;
    printf("Lumberjacks:\n");
    while (t--)
    {
        vector<int> a;
        for (int i = 0; i < 10; i++)
        {
            int aa;
            cin >> aa;
            a.push_back(aa);
        }
        bool up, down;
        up = is_sorted(a.begin(), a.end());
        reverse(a.begin(), a.end());
        down = is_sorted(a.begin(), a.end());
        if (up || down)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
}