#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int in1, count = 1;
	scanf("%d", &in1);
	while (in1--)
	{
		int in2, all[100005], error_index = 0;
		bool ans1 = true;
		scanf("%d", &in2);
		for (int i = 0; i < in2; i++)
		{
			scanf("%d", &all[i]);
		}
		bool sort_check = false;
		while (sort_check == false)
		{
			sort_check = true;
			for (int i = 0; i < in2 - 2; i++)
			{
				if (all[i] > all[i + 2])
				{
					sort_check = false;
					all[i] ^= all[i + 2];
					all[i + 2] ^= all[i];
					all[i] ^= all[i + 2];
				}
			}
		}
		for (int i = 0; i < in2 - 1; i++)
		{
			if (all[i] > all[i + 1])
			{
				ans1 = false;
				error_index = i;
				break;
			}
		}
		if (ans1)
		{
			printf("Case #%d: OK\n", count);
		}
		else
		{
			printf("Case #%d: %d\n", count, error_index);
		}
		count++;
	}
}