#include<stdio.h>
int all[100000][6][6] = { 0 };
int main()
{
	int in1;
	scanf("%d", &in1);
	int i, j, k;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			scanf("%d", &all[0][i][j]);
		}
	}
	for (i = 1; i < in1; i++){
		int need = 0;
		for (j = 0; j < 5; j++){
			for (k = 0; k < 5; k++){
				scanf("%d", &all[i][j][k]);
				if (all[i - 1][j][k] == 8){
					if (all[i][j][k] == 8){
						need += 5;
					}
					else{
						need += 2;
					}
				}
				else{
					if (all[i][j][k] == 8){
						need += 7;
					}
					else{
						need += 1;
					}
				}
			}
		}
		printf("%d\n", need);
	}
	return 0;
}
