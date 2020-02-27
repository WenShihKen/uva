/*
    Author: Ken
    Problems: 1303A
*/
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int in1;
	cin >> in1;
	while (in1--)
	{
		string s;
		cin >> s;
		int start = 0, end = 0;
		for (int i = 0; i != s.length(); i++)
			if (s[i] == '1')
			{
				start = i;
				break;
			}
		for (int i = s.length() - 1; i >= 0; i--)
			if (s[i] == '1')
			{
				end = i;
				break;
			}
		int ans = 0;
		for (int i = start; i < end; i++)
			if (s[i] == '0')
				ans++;
		cout << ans << endl;
	}
}
