#include<stdio.h>     /*不會用scanf輸入  只好用最爛的方法...*/
char all[17][32];
int in1[17][33] = { 0 }, count[17][33] = { 0 };
int main()
{
	int t = 0;
	while (gets(all[t])){
		int i, j;
		for (i = 0; i < 17; i++){
			for (j = 0; j < 32; j++){
				in1[i][j] = 0;
				count[i][j] = 0;
			}
		}
		for (i = 1; i < 15; i++){
			gets(all[i]);
		}
		for (i = 0; i < 15; i++){
			for (j = 0; j < 30; j++){
				int i1 = i, j1 = j;
				in1[++i1][++j1] = all[i][j];
			}
		}
		for (i = 1; i <= 15; i++){
			for (j = 1; j <= 30; j++){
				if (in1[i][j] == 42){
					continue;
				}
				else if (in1[i][j] == 46){
					if (in1[i - 1][j] == 42){
						count[i][j]++;
					}
					if (in1[i][j - 1] == 42){
						count[i][j]++;
					}
					if (in1[i + 1][j] == 42){
						count[i][j]++;
					}
					if (in1[i][j + 1] == 42){
						count[i][j]++;
					}
					if (in1[i - 1][j - 1] == 42){
						count[i][j]++;
					}
					if (in1[i - 1][j + 1] == 42){
						count[i][j]++;
					}
					if (in1[i + 1][j + 1] == 42){
						count[i][j]++;
					}
					if (in1[i + 1][j - 1] == 42){
						count[i][j]++;
					}
				}
			}
		}
		for (i = 1; i <= 15; i++){
			for (j = 1; j <= 30; j++){
				if (count[i][j]){
					printf("%d", count[i][j]);
				}
				else{
					printf("%c", in1[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
