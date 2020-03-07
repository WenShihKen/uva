/*
    Author: Ken
    Problems: 1323C
	Tag: greedy
*/
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
typedef long long int ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0, right = 0;
    if (s.length() % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                left++;
            }
            else
            {
                right++;
            }
        }
        int ans = 0;
        if (left != right)
        {
            cout << -1 << endl;
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '(')
                {
                    sum++;
                    if (sum <= 0)
                    {
                        ans++;
                    }
                }
                else if (s[i] == ')')
                {
                    sum--;
                    if (sum < 0)
                    {
                        ans++;
                    }
                }
            }
            cout << ans << endl;
        }
    }
}