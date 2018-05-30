#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int many, guess, round = 1;
	while (cin >> many >> guess) {
		if (many == 0 && guess == 0)
			break;
		printf("CASE# %d:\n", round++);
		int temp[10005];
		fill(temp, temp + 10003, 0);
		for (int i = 0; i < many; i++)
			cin >> temp[i];
		sort(temp, temp + many);
		for (int k = 0; k < guess; k++) {
			int found = -1, y;
			cin >> y;
			for (int i = 0; i < many; i++) {
				if (temp[i] == y) {
					found = i; 
					break;
				}
			}
			if (found >= 0) {
				printf("%d found at %d\n", y, found + 1);
			}
			else if (found == -1) {
				printf("%d not found\n", y);
			}
		}
	}
	return 0;
}