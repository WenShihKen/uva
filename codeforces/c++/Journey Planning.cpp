/*
    Author: Ken
    Problems: 1321B
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;
typedef long long int LL;

LL dd[200005] = {}, all[200005] = {};

int main()
{
    LL t, ans = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> all[i];
        dd[i] = all[i] - i;
    }
    map<LL, LL> m;

    map<LL, LL>::iterator iter;
    for (int i = 0; i < t; i++)
    {
        m[dd[i]] += all[i];
    }
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        ans = max(iter->second, ans);
    }

    cout << ans << endl;
}
// 3 4 4 6 6 7 8 9 city value

// 3 3 2 3 2 2 2 2 city value minus index
//10 7 1 9 10 15
//10 6 -1 6 6 10