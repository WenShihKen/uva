#include<stdio.h>
int main()
{
	int many, push, full, round = 1;
	while (scanf("%d%d%d", &many, &push, &full) != EOF) {
		int ele[100], count[100], i, push_number, max = 0, now = 0;
		if (many == 0 && push == 0 && full == 0) {
			break;
		}
		for (i = 0; i < many; i++) {
			scanf("%d", &ele[i]);
			count[i] = 0;
		}
		for (i = 0; i < push; i++) {
			scanf("%d", &push_number);
			count[push_number - 1]++;
			if (count[push_number - 1] % 2 == 1) {
				now += ele[push_number - 1];
			}
			else {
				now -= ele[push_number - 1];
			}
			if (now > max) {
				max = now;
			}
		}
		if (max > full) {
			printf("Sequence %d\n", round);
			printf("Fuse was blown.\n\n");
		}
		else {
			printf("Sequence %d\n", round);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n\n", max);
		}
		round++;
	}
	return 0;
}
