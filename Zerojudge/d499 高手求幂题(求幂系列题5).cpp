#include<stdio.h>
int all[1500];
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int i, j;
		for (i = 0; i <= 1498; i++){
			all[i] = 0;
		}
		all[0] = in1;
		for (i = 1; i < in2; i++){
			for (j = 0; j <= 1498; j++){
				all[j] = all[j] * in1;
			}
			for (j = 0; j <= 1498; j++){
				if (all[j] >= 10){
					all[j + 1] += all[j] / 10;
					all[j] %= 10;
				}
			}
		}
		for (i = 1498; all[i] == 0; i--){
		}
		for (j = i; j >= 0; j--){
			printf("%d", all[j]);
		}
		printf("\n");
	}
	return 0;
}
