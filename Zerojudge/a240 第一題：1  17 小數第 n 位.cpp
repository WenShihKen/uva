#include<stdio.h>
int all[170005] = { 0 }, temp[170005] = { 0 };
int main()
{
	int time, now = 1, i;
	for (i = 1; i <= 170002; i++){
		now *= 10;
		temp[i] = now / 17;
		all[i] = all[i - 1] + temp[i];
		now %= 17;
	}
	scanf("%d", &time);
	while (time--){
		int k;
		scanf("%d", &k);
		printf("%d %d\n", temp[k], all[k]);
	}
	return 0;
}
