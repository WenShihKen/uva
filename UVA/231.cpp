#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int all[1000005] = {};
int temp1[1000005] = {};
int main()
{
	int t = 1;
	while (1) {
		fill(all, all + 1000004, 0);
		fill(temp1, temp1 + 1000004, 0);
		int number, count = 0, ans = 0;
		cin >> number;
		if (number == -1)
			break;
		all[count++] = number;
		while (1) {
			int temp;
			cin >> temp;
			if (temp == -1)
				break;
			all[count++] = temp;
		}
		for (int i = 0; i < count; i++)
			temp1[i] = 1;
		for (int i = 0; i < count; i++) {
			for (int j = i + 1; j < count; j++) {
				if (all[i] > all[j]) {
					temp1[j] = max(temp1[j], temp1[i] + 1);
				}
			}
		}
		for (int i = 0; i < count; i++)
			ans = max(ans, temp1[i]);
		if (t > 1)
			printf("\n");
		printf("Test #%d:\n", t++);
		printf("  maximum possible interceptions: %d\n", ans);
	}
}