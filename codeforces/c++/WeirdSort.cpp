/*
    Author: Ken
    Problems: 1311B
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int in1;
	cin >> in1;
	while (in1--)
	{
		int a, b;
		cin >> a >> b;
		int all[105] = {}, p[105] = {};
		for (int i = 0; i < a; i++)
		{
			cin >> all[i];
		}
		for (int i = 0; i < b; i++)
		{
			cin >> p[i];
		}
		for (int i = 0; i < a; i++)
		{
			if (is_sorted(all, all + a))
				break;
			for (int j = 0; j < b; j++)
			{
				if (all[p[j] - 1] > all[p[j]])
				{
					all[p[j] - 1] ^= all[p[j]] ^= all[p[j] - 1] ^= all[p[j]];
				}
			}
		}
		if (is_sorted(all, all + a))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
//100
//2 1
//26 55
//1
//4 1
//19 42 77 29
//1
//5 2
//26 39 72 31 68
//3 2
