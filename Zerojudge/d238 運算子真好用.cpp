#include<stdio.h>
int main()
{
	int in = 2, all[1005] = { 0 }, i, j, max = 1004, sum = 0;
	all[0] = 1;
	for (i = 1; i <= 1000; i++){
		for (j = 0; j <= 1004; j++){
			all[j] *= 2;
		}
		for (j = 0; j <= 1004; j++){
			if (all[j] >= 10){
				all[j + 1] += all[j] / 10;
				all[j] %= 10;
			}
		}
	}
	for (i = max; all[i] == 0; i--){
	}
	j = i;
	for (; i >= 0; i--){
		sum += all[i];
	}
	printf("%d\n", sum);
	return 0;
}
