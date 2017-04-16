#include<stdio.h>
int main()
{
	int time, round = 1;
	scanf("%d", &time);
	while (time--) {
		long long int man, skip, i, last = 0;
		scanf("%lld%lld", &man, &skip);
		for (i = 2; i <= man; i++) {
			last = (last + skip) % i;
		}
		printf("Case %d: %lld\n", round, last + 1);
		round++;
	}
	return 0;
}
