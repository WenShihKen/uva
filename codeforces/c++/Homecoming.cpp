/*
    Author: Ken
    Problems: 1316A
	Tag: ad-hoc, greedy
*/
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p;
        cin >> a >> b >> p;
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int ind = -1;
            for (int i = s.length() - 2; i >= 0;)
            {

                if (s[i] == 'A')
                {
                    p -= a;
                    //cout<<"a "<<p<<"  "<<i<<endl;
                    if (p < 0)
                    {
                        ind = i + 2;
                        break;
                    }
                    else
                    {
                        while (i >= 0 && s[i] == 'A')
                        {
                            i--;
                        }
                    }
                }
                else
                {
                    p -= b;
                    //cout<<"b "<<p<<"  "<<i<<endl;
                    if (p < 0)
                    {
                        ind = i + 2;
                        break;
                    }
                    else
                    {
                        while (i >= 0 && s[i] == 'B')
                        {
                            i--;
                        }
                    }
                }
            }
            if (ind == -1)
                cout << 1 << endl;
            else
                cout << ind << endl;
        }
    }
}