/**
 *  @judge Zerojudge
 *  @id d438
 *  @name Digit Primes
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
int a[1000010] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i <= 1000000; i++)
    {
        int digit = 0, temp = i;
        while (temp)
        {
            digit += (temp % 10);
            temp /= 10;
        }
        bool flag = true;
        for (int j = 2; j <= sqrt(digit); j++)
        {
            if (digit % j == 0)
            {
                flag = false;
                break;
            }
        }
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        a[i] = a[i - 1] + (flag == true && digit != 1);
    }
    int n;
    cin >> n;
    while (n--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        cout << a[n2] - a[n1 - 1] << endl;
    }
}