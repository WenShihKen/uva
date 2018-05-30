#include<stdio.h>
long long int p[40] = { 0 };
int main()
{
	int i;
	p[0] = 1;
	for (i = 1; i < 35; i++){
		p[i] = (p[i - 1] * 2);
	}
	int t;
	scanf("%d", &t);
	while (t--){
		long long int boss;
		scanf("%lld", &boss);
		int time = 0, j = 0;
		while (boss != 0){
			boss -= p[j];
			time++;
			if (boss%p[j + 1] != 0){
				boss -= p[j];
				time++;
			}
			j++;
		}
		printf("%d\n", time);
	}
	return 0;
}
