/*
    Author: Ken
    Problems: 1304B
    Tag: ad-hoc
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    getchar();
    set<string> all;
    string s[105];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        all.insert(s[i]);
    }
    vector<string> ll, rr;
    string mid = "";
    bool mid_repeat = false;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        string temp = s[i];
        reverse(temp.begin(), temp.end());
        auto iter = all.find(temp);
        if (s[i] == temp)
        {
            mid = temp;
            mid_repeat = true;
        }
        else if (iter != all.end())
        {
            ll.push_back(s[i]);
            rr.push_back(temp);
            len += s[i].length() * 2;
            all.erase(s[i]);
            all.erase(temp);
        }
    }
    reverse(rr.begin(), rr.end());
    if (len + mid.length() == 0)
    {
        cout << 0 << endl
             << endl;
    }
    else
    {
        cout << len + mid.length() << endl;
        for (auto i : ll)
        {
            cout << i;
        }
        cout << mid;
        for (auto i : rr)
        {
            cout << i;
        }
        cout << endl;
    }
}