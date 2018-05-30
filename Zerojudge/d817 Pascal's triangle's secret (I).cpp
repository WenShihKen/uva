#include<stdio.h>
long long int all[5003][196] = { 0 };
int main()
{
	int i, j;
	for (i = 0; i < 5002; i++){
		for (j = 0; j < 194; j++){
			all[i][j] = 0;
		}
	}
	all[0][0] = 1;
	for (i = 1; i <= 5000; i++){
		for (j = 0; j < 194; j++){
			all[i][j] = all[i - 1][j] * 2;
		}
		for (j = 0; j < 194; j++){
			if (all[i][j] > 100000000){
				all[i][j + 1] += (all[i][j] / 100000000);
				all[i][j] %= 100000000;
			}
		}
	}
	int find;
	while (scanf("%d", &find) != EOF){
		for (i = 193; all[find][i] == 0; i--){
		}
		printf("%d", all[find][i]);
		for (j = i - 1; j >= 0; j--){
			if (all[find][j] < 10){
				printf("0000000%d", all[find][j]);
			}
			else if (all[find][j] < 100){
				printf("000000%d", all[find][j]);
			}
			else if (all[find][j] < 1000){
				printf("00000%d", all[find][j]);
			}
			else if (all[find][j] < 10000){
				printf("0000%d", all[find][j]);
			}
			else if (all[find][j] < 100000){
				printf("000%d", all[find][j]);
			}
			else if (all[find][j] < 1000000){
				printf("00%d", all[find][j]);
			}
			else if (all[find][j] < 10000000){
				printf("0%d", all[find][j]);
			}
			else{
				printf("%d", all[find][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
