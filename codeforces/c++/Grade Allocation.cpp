/*
    Author: Ken
    Problems: 1316A
	Tag: ad-hoc
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
        int n, m;
        cin >> n >> m;
        int ss[1005] = {}, temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ss[i];
            temp += ss[i];
        }
        cout << min(temp, m) << endl;
    }
}