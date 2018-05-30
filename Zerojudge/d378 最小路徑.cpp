#include<stdio.h>
int all[103][103] = { 0 };
int main()
{
	int in1, in2, t = 1;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int i, j;
		for (i = 0; i < in1; i++){
			for (j = 0; j < in2; j++){
				all[i][j] = 0;
			}
		}
		for (i = 0; i < in1; i++){
			for (j = 0; j < in2; j++){
				scanf("%d", &all[i][j]);
			}
		}
		for (i = 1; i < in1; i++){
			all[i][0] += all[i - 1][0];
		}
		for (i = 1; i < in2; i++){
			all[0][i] += all[0][i - 1];
		}
		for (i = 1; i < in1; i++){
			for (j = 1; j < in2; j++){
				if (all[i - 1][j] > all[i][j - 1]){
					all[i][j] += all[i][j - 1];
				}
				else{
					all[i][j] += all[i - 1][j];
				}
			}
		}
		printf("Case #%d :\n", t++);
		printf("%d\n", all[in1 - 1][in2 - 1]);
	}
	return 0;
}
