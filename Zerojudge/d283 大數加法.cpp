#include<stdio.h>
int all[20001][1605] = { 0 };
int main()
{
	int i, j;
	all[0][0] = 1;
	all[1][0] = 1;
	for (i = 2; i <= 20000; i++){
		for (j = 0; j <= 1602; j++){
			all[i][j] = all[i - 1][j] + all[i - 2][j];
		}
		for (j = 0; j <= 1602; j++){
			if (all[i][j] >= 10000){
				all[i][j + 1] += 1;
				all[i][j] %= 10000;
			}
		}
	}
	int f;
	while (scanf("%d", &f) != EOF){
		int last;
		for (last = 1602; all[f - 1][last] == 0; last--){
		}
		printf("%d", all[f - 1][last]);
		for (int now = last - 1; now >= 0; now--){
			if (all[f - 1][now] < 10){
				printf("000%d", all[f - 1][now]);
			}
			else if(all[f - 1][now] < 100){
				printf("00%d", all[f - 1][now]);
			}
			else if (all[f - 1][now] < 1000){
				printf("0%d", all[f - 1][now]);
			}
			else{
				printf("%d", all[f - 1][now]);
			}
		}
		printf("\n");
	}
	return 0;
}
