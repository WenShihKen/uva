/**
 *  @judge Zerojudge
 *  @id e155
 *  @name Throwing cards away I
 * 
 *  @tag Queue
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
int a[100005] = {};
int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while (q.size() != 1)
        {
            printf(" %d", q.front());
            if (q.size() != 2)
            {
                printf(",");
            }
            q.pop();
            int t = q.front();
            q.pop();
            q.push(t);
        }
        cout << endl;
        printf("Remaining card: %d\n", q.front());
    }
}