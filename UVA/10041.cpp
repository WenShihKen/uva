#include<stdio.h>
#include<math.h>
#include<algorithm>
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0) {
		int many, a[1000] = { 0 }, i, temp = 0, len = 0;
		scanf("%d", &many);
		for (i = 0; i < many; i++) {
			scanf("%d", &a[i]);
		}
		qsort((void *)a, many, sizeof(int), compare);
		if (many % 2 == 0) {
			temp = (a[(many / 2) - 1] + a[many / 2]) / 2;
		}
		else {
			temp = a[many / 2];
		}
		for (i = 0; i < many; i++) {
			len += abs(temp - a[i]);
		}
		printf("%d\n", len);
		time--;
	}
	return 0;
}
