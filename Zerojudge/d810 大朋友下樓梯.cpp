#include<stdio.h>
#include<stdlib.h>
int all[5][25] = { 0 };
int main()
{
	int i, j;
	all[2][1] = 1, all[2][2] = 2;
	all[3][1] = 1, all[3][2] = 2, all[3][3] = 4;
	for (i = 2; i <= 2; i++){
		for (j = 3; j <= 21; j++){
			all[i][j] = all[i][j - 1] + all[i][j - 2];
		}
	}
	for (i = 3; i <= 3; i++){
		for (j = 4; j <= 21; j++){
			all[i][j] = all[i][j - 1] + all[i][j - 2] + all[i][j - 3];
		}
	}
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		if (in1 == 1)
			printf("1\n");
		else
			printf("%d\n", all[in1][abs(in2)]);
	}
	return 0;
}
