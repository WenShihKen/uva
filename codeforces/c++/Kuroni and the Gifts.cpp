/*
    Author: Ken
    Problems: 1305A
	Tag:  sort
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[105] = {}, b[105] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
}