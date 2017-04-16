#include<stdio.h>
int all[105] = { 0 };
int sum[30000] = { 0 };
int main()
{
	int many, t = 1;
	while (scanf("%d", &many) != EOF) {
		int i, j, count = 0;
		for (i = 0; i < 20005; i++) {
			sum[i] = 0;
		}
		for (i = 0; i < many; i++) {
			scanf("%d", &all[i]);
			if (all[i] < 1) {
				count = 1;
			}
			else if ((all[i] < all[i - 1] && i >= 1) || all[i] < 1) {
				count = 1;
			}
		}
		for (i = 0; i < many; i++) {
			for (j = i; j < many; j++) {
				sum[all[i] + all[j]]++;
			}
		}
		for (i = 0; i < 20005; i++) {
			if (sum[i] >= 2) {
				count = 1;
				break;
			}
		}
		if (count) {
			printf("Case #%d: It is not a B2-Sequence.\n", t);
		}
		else {
			printf("Case #%d: It is a B2-Sequence.\n", t);
		}
		t++;
	}
	return 0;
}
