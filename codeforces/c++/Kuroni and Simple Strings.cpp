/*
    Author: Ken
    Problems: 1305B
	Tag:  greedy
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
typedef long long int LL;
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool check[1005] = {};
    int left = -1, right = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            left = i;
            break;
        }
    }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            right = i;
            break;
        }
    }
    int ans = 0;
    if (left == -1 || right == -1 || left > right)
    {
        cout << 0 << endl;
    }
    else
    {
        while (left < right)
        {
            check[left] = true, check[right] = true;
            left++;
            ans += 2;
            while (left < s.length())
            {
                if (s[left] == '(')
                {
                    break;
                }
                left++;
            }
            right--;
            while (right >= 0)
            {
                if (s[right] == ')')
                {
                    break;
                }
                right--;
            }
        }
        cout << 1 << endl;
        cout << ans << endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (check[i])
            {
                printf("%d ", i + 1);
            }
        }
    }
}