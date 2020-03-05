#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int damage(string in1)
{
	int d = 0, count = 1;
	for (int i = 0; i < in1.length(); i++)
	{
		if (in1[i] == 'S')
		{
			d += count;
		}
		else if (in1[i] == 'C')
		{
			count *= 2;
		}
	}
	return d;
}

int check(int d, string in1)
{
	int ans = 0;

	if (in1.length() > 1)
	{
		bool changed = true;
		while (changed)
		{
			if (damage(in1) <= d)
			{
				return ans;
			}
			changed = false;

			for (int i = in1.length() - 1; i > 0; i--)
			{
				if (in1[i - 1] == 'C' && in1[i] == 'S')
				{
					char temp = in1[i];
					in1[i] = in1[i - 1];
					in1[i - 1] = temp;
					ans++;
					changed = true;
					break;
				}
			}
		}
	}
	int final_damage = damage(in1);
	return final_damage <= d ? ans : -1;
}

int main()
{
	int T, count = 1;
	scanf("%d", &T);
	while (T--)
	{
		int d;
		string instruction;
		cin >> d >> instruction;

		int ans = check(d, instruction);
		if (ans == -1)
		{
			printf("Case #%d: IMPOSSIBLE\n", count++);
		}
		else
		{
			printf("Case #%d: %d\n", count++, ans);
		}
	}
}