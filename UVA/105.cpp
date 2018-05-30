#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int sky[10005], max = 0, change = 0;
	fill(sky, sky + 10003, 0);
	int l, h, r;
	while (cin >> l >> h >> r) {
		if (l == 0 && h == 0 && r == 0)
			break;
		max = max > r ? max : r;
		for (int i = l; i < r; i++) {
			if (sky[i] < h) {
				sky[i] = h;
			}
		}
	}
	if (sky[0]) {
		printf("%d %d ", 0, sky[0]);
	}
	for (int i = 1; i <= max; i++) {
		if (sky[i - 1] != sky[i]) {
			printf("%d %d", i, sky[i]);
			if (i != max)
				printf(" ");
		}
	}
	printf("\n");
}