#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        string str, ans;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'S')
            {
                ans += 'E';
            }
            else
            {
                ans += 'S';
            }
        }
        printf("Case #%d: %s\n", ++count, ans.c_str());
    }
}