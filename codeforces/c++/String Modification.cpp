/*
    Author: Ken
    Problems: 1316B
	Tag:  string
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
typedef long long int LL;
using namespace std;
string s;
string mod(int start)
{
    string left = s.substr(start, s.length() - start);
    string right = s.substr(0, start);
    if ((start + 1) % 2 == s.length() % 2)
    {
        reverse(right.begin(), right.end());
    }
    return left + right;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        cin >> s;
        if (s.length() == 1)
        {
            cout << s << endl;
            cout << 1 << endl;
            continue;
        }
        string ans = s;
        int count = 1; // 1和原字串相同
        for (int i = 1; i < s.length(); i++)
        {
            string temp = mod(i);
            //cout<<temp<<" "<<i<<endl;
            if (temp < ans)
            {
                count = i + 1;
                ans = temp;
            }
        }
        cout << ans << endl
             << count << endl;
    }
}