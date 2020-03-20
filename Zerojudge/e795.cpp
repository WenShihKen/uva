/**
 *  @judge Zerojudge
 *  @id e795
 *  @name p2.質數日
 * 
 *  @tag Prime
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
int a[200010] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int d, count = 7, temp = 0;
        cin >> d;
        temp = d;
        bool prime = true;
        while (temp != 0 && prime)
        {
            for (int i = 2; i <= sqrt(temp + 0.5); i++)
            {
                if (temp % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            temp %= int(pow(10, count--));
        }
        if (prime)
        {
            cout << d << " is a Prime Day!\n";
        }
        else
        {
            cout << d << " isn't a Prime Day!\n";
        }
    }
}