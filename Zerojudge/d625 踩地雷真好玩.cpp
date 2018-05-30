#include<stdio.h>
#include<string.h>
char in1[105][105];
int bomb[105][105], temp[105][105];
int main()
{
	int line;
	while (scanf("%d\n", &line) != EOF){
		int i, j;
		for (i = 0; i < 104; i++){
			for (j = 0; j < 104; j++){
				bomb[i][j] = 0;
				temp[i][j] = 0;
			}
		}
		for (i = 0; i < line; i++){
			gets(in1[i]);
		}
		for (i = 0; i < line; i++){
			for (j = 0; j < line; j++){
				temp[i + 1][j + 1] = in1[i][j];
				if (in1[i][j] == 42){
					bomb[i + 1][j + 1] = in1[i][j];
				}
			}
		}
		for (i = 1; i <= line; i++){
			for (j = 1; j <= line; j++){
				if (temp[i][j] == 45 && temp[i + 1][j] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i + 1][j + 1] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i + 1][j - 1] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i - 1][j] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i - 1][j + 1] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i - 1][j - 1] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i][j - 1] == 42){
					bomb[i][j]++;
				}
				if (temp[i][j] == 45 && temp[i][j + 1] == 42){
					bomb[i][j]++;
				}
			}
		}
		for (i = 1; i <= line; i++){
			for (j = 1; j <= line; j++){
				if (bomb[i][j] >= 1 && bomb[i][j] <= 9){
					printf("%d", bomb[i][j]);
				}
				else if (bomb[i][j] == 0){
					printf("-");
				}
				else if (bomb[i][j] == 42){
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
