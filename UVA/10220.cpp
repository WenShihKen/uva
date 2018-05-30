#include<stdio.h>
int all[1001][3000] = { 0 };
int main()
{
	int i, j;
	all[1][0] = 1; all[2][0] = 2;
	for (i = 3; i <= 1000; i++){
		for (j = 0; j <= 2999; j++){
			all[i][j] = all[i - 1][j] * i;
		}
		for (j = 0; j <= 2999; j++){
			if (all[i][j] >= 10){
				all[i][j + 1] += all[i][j] / 10;
				all[i][j] %= 10;
			}
		}
	}
	int find;
	while (scanf("%d", &find) != EOF){
		int max = 2999, i1, s, sum = 0;
		if (find == 0){
			printf("1\n");
		}
		else{
			for (i1 = max; all[find][i1] == 0; i1--){
			}
			for (s = i1; s >= 0; s--){
				sum += all[find][s];
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
