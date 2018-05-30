#include<stdio.h>
int all[5002][500] = { 0 };
int main()
{
	int i, j;
	all[0][0] = 1;
	all[1][0] = 1;
	for (i = 2; i <= 5001; i++){
		for (j = 0; j <= 499; j++){
			all[i][j] = all[i - 1][j] + all[i - 2][j];
		}
		for (j = 0; j <= 499; j++){
			if (all[i][j] >= 100000000){
				all[i][j + 1] += (all[i][j]/100000000);
				all[i][j] %= 100000000;
			}
		}
	}
	int f;
	while (scanf("%d", &f) != EOF){
		int last;
		printf("The Fibonacci number for %d is ", f);
		if (f == 0){
			printf("0\n");
		}
		else{
			for (last = 499; all[f - 1][last] == 0; last--){
			}
			printf("%d", all[f - 1][last]);
			for (int now = last - 1; now >= 0; now--){
				if (all[f - 1][now] < 10){
					printf("0000000%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 100){
					printf("000000%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 1000){
					printf("00000%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 10000){
					printf("0000%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 100000){
					printf("000%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 1000000){
					printf("00%d", all[f - 1][now]);
				}
				else if (all[f - 1][now] < 10000000){
					printf("0%d", all[f - 1][now]);
				}
				else{
					printf("%d", all[f - 1][now]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
