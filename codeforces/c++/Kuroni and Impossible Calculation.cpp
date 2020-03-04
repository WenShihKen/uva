/*
    Author: Ken
    Problems: 1305C
	Tag:  math
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
typedef long long int LL;
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int all[200005] = {};
    bool flag = false;
    LL ans = 1, tm = m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &all[i]);
    }
    if (n > m)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                LL temp = all[i] - all[j];
                if (temp < 0)
                {
                    temp = ~temp + 1;
                }
                if (temp == 0 || temp == m)
                {
                    flag = true;
                    break;
                }
                if (tm % temp == 0)
                {
                    tm /= temp;
                }
                if (tm == 1)
                {
                    flag = true;
                    break;
                }
                ans *= temp;
                ans %= m;
            }
            if (flag)
            {
                break;
            }
        }
        if (flag == true)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}