#include<stdio.h>
#include<math.h>
int prime[7005];
int main()
{
	int i, j;
	for (i = 1; i <= 7000; i++){
		prime[i] = 0;
	}
	prime[1] = 1;
	for (i = 2; i <= 7000; i++){
		for (j = 2; j <= sqrtl(i); j++){
			if (i%j == 0){
				prime[i] = 1;
			}
		}
		j = 2;
	}
	int time;
	scanf("%d", &time);
	while (time--){
		int start, end, sum = 0;
		scanf("%d%d", &start, &end);
		for (i = start; i <= end; i++){
			if (prime[i]){
				sum += i;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
