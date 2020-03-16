/**
 *  @judge CodeForces
 *  @id 1301B
 *  @name Motarack's Birthday
 *  @contest Codeforces Round #619
 * 
 *  @tag Greedy
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <cmath>
typedef long long int ll;
using namespace std;
int arr[200005] = {};
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mi = 999999999, ma = -999999999;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                if (i - 1 >= 0 && arr[i - 1] != -1)
                {
                    mi = min(arr[i - 1], mi);
                    ma = max(arr[i - 1], ma);
                }
                if (i + 1 < n && arr[i + 1] != -1)
                {
                    mi = min(arr[i + 1], mi);
                    ma = max(arr[i + 1], ma);
                }
            }
        }
        if (mi == 999999999 && ma == -999999999)
        {
            cout << "0 0\n";
            continue;
        }
        int temp = (ma + mi) / 2;
        int div = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                arr[i] = temp;
            }
            if (i > 0)
            {
                div = max(div, abs(arr[i] - arr[i - 1]));
            }
        }
        cout << div << " " << temp << endl;
    }
}