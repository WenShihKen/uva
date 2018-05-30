#include<stdio.h>
int all[60][60];
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int in1, in2, d, i, j, many = 0;
		scanf("%d%d%d", &in1, &in2, &d);
		for (i = 0; i <= 59; i++){
			for (j = 0; j <= 59; j++){
				all[i][j] = 0;
			}
		}
		for (i = 1; i <= in1; i++){
			for (j = 1; j <= in2; j++){
				scanf("%d", &all[i][j]);
				if (all[i][j]){
					many++;
				}
			}
		}
		for (i = 1; i <= in1; i++){
			for (j = 1; j <= in2; j++){
				if (all[i][j]){
					continue;
				}
				else{
					if (all[i - 1][j] || all[i][j - 1] || all[i + 1][j] || all[i][j + 1]){
						many++;
					}
				}
			}
		}
		printf("%d\n", in1*in2*d - many * 3);
	}
	return 0;
}
