/*
    Author: Ken
    Problems: 1321C
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int index[26] = {};
    for (int i = 0; i < s.length(); i++)
    {
        index[s[i] - 'a']++;
    }
    int count_len = 0;
    for (int i = 25; i >= 1; i--)
    {
        for (int count = 0; count < index[i]; count++)
        { //算有幾個字母 從 Z 開始往下
            for (int len = 0; len < s.length(); len++)
            {
                string temp;
                for (int l = 0; l < s.length(); l++)
                {
                    temp += s[l];
                }
                if (s[len] == i + 'a')
                { //是該字母
                    //cout<<len<<endl;
                    if (len + 1 < s.length())
                    {
                        //cout<<"+1"<<endl;
                        //cout<<s[len]<<" "<<s[len+1]<<endl;
                        if (abs(s[len] - s[len + 1]) == 1)
                        {
                            temp[len] = ' ';
                            //cout<<temp<<endl;
                            s.clear();
                            for (int k = 0; k < temp.length(); k++)
                            {
                                if (temp[k] != ' ')
                                    s += temp[k];
                            }
                            count_len++;
                            len--;
                            break;
                        }
                    }
                    if (len - 1 >= 0)
                    {
                        //cout<<-1<<endl;
                        //cout<<s[len]<<" "<<s[len-1]<<endl;
                        if (abs(s[len] - s[len - 1]) == 1)
                        {
                            temp[len] = ' ';
                            //cout<<temp<<endl;
                            s.clear();
                            for (int k = 0; k < temp.length(); k++)
                            {
                                if (temp[k] != ' ')
                                    s += temp[k];
                            }
                            len--;
                            count_len++;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << count_len << endl;
}