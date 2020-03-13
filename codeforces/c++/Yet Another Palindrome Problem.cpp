/**
 *  @judge CodeForces
 *  @id 1324B
 *  @name Yet Another Palindrome Problem
 *  @contest Codeforces Round #627
 * 
 *  @tag String
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int all[5005] = {}, count[5005] = {};
        map<int, int> first;
        for (int i = 1; i <= n; i++)
        {
            cin >> all[i];
        }
        for (int i = 1; i <= 2; i++)
        {
            count[all[i]]++;
            if (!first[all[i]])
            {
                first[all[i]] = i;
            }
        }
        bool flag = false;
        for (int i = 3; i <= n; i++)
        {
            count[all[i]]++;
            if (count[all[i]] >= 3)
            {
                flag = true;
                break;
            }
            if (!first[all[i]])
            {
                first[all[i]] = i;
            }
            if (count[all[i]] == 2)
            {
                if (i - first[all[i]] >= 2)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}