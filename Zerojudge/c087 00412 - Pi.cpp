/*
    Author: Ken
    Problems: c087
    Name: PI
	Tag: math
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <bits/stdc++.h>
#include <cmath>
#define max_arr 5
typedef long long int ll;
using namespace std;
int gcd(int a, int b)
{
    if (a == 1 || b == 1)
    {
        return 1;
    }
    else if (a == 0 || b == 0)
    {
        return max(a, b);
    }
    if (a > b)
    {
        return gcd(a % b, b);
    }
    return gcd(b % a, a);
}
int main()
{
    int in1;
    while (cin >> in1)
    {
        if (in1 == 0)
        {
            break;
        }
        vector<int> a;
        for (int i = 0; i < in1; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                if (gcd(a[i], a[j]) == 1)
                {
                    ans++;
                }
            }
        }
        double c = (in1 * (in1 - 1)) / 2.0;
        if (ans == 0)
        {
            printf("No estimate for this data set.\n");
        }
        else
        {
            printf("%.6lf\n", sqrt(6.0 * c / ans));
        }
    }
}