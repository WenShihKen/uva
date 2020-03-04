/*
    Author: Ken
    Problems: 1315B
    Tag: ad-hoc, greedy
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
typedef long long int LL;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int all[500] = {}, b[500] = {};
        int in1;
        cin >> in1;
        map<int, int> mm;
        for (int i = 0; i < in1; i++)
        {
            cin >> all[i];
            mm[all[i]] = 1;
        }
        bool flag = true;
        int count = 0;
        for (int i = 0; i < in1; i++)
        {
            for (int find = all[i] + 1; find <= 2 * in1; find++)
            {
                if (mm[find] == 0)
                {
                    mm[find] = 1;
                    b[count++] = find;
                    break;
                }
            }
        }
        for (int i = 1; i <= in1 * 2; i++)
        {
            if (mm[i] == 0)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < in1; i++)
            {
                printf("%d %d ", all[i], b[i]);
            }
            cout << endl;
        }
    }
}