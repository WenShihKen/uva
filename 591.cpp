#include<stdio.h>
int main()
{
	long long int many, time = 1;
	while (scanf("%lld", &many) != EOF) {
		long long int a[1000], count, sum = 0, average, move = 0;
		if (many == 0) {
			break;
		}
		for (count = 0; count < many; count++) {
			scanf("%lld", &a[count]);
			sum += a[count];
		}
		average = sum / many;
		for (count = 0; count < many; count++) {
			if (a[count] < average) {
				move += (average - a[count]);
			}
		}
		printf("Set #%d\n", time);
		printf("The minimum number of moves is %d.\n", move);
		time++;
	}
	return 0;
}
