#include<stdio.h>
int all[1001][87] = { 0 };
int sum[87] = { 0 };
int main()
{
	int i, j, k;
	for (i = 0; i <= 1000; i++){
		all[i][0] = 1;
	}
	for (i = 2; i <= 1000; i++){
		for (j = 1; j < i; j++){
			for (k = 0; k <= 80; k++){
				all[i][k] *= 2;
			}
			for (k = 0; k <= 80; k++){
				if (all[i][k] >= 10000){
					all[i][k + 1] += (all[i][k] / 10000);
					all[i][k] %= 10000;
				}
			}
		}
	}
	int find;
	while (scanf("%d", &find) != EOF){
		for (i = 0; i <= 85; i++){
			sum[i] = 0;
		}
		for (i = 1; i <= find; i++){
			for (j = 0; j <= 80; j++){
				sum[j] += all[i][j];
			}
			for (j = 0; j <= 80; j++){
				if (sum[j] >= 10000){
					sum[j + 1] += (sum[j] / 10000);
					sum[j] %= 10000;
				}
			}
		}
		for (i = 80; sum[i] == 0; i--){
		}
		printf("%d", sum[i]);
		for (j = i - 1; j >= 0; j--){
			if (sum[j] < 10){
				printf("000%d", sum[j]);
			}
			else if (sum[j] < 100){
				printf("00%d", sum[j]);
			}
			else if (sum[j] < 1000){
				printf("0%d", sum[j]);
			}
			else{
				printf("%d", sum[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
