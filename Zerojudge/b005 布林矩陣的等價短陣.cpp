#include<stdio.h>
int all[105][105] = { 0 };
int main()
{
	int big;
	while (scanf("%d", &big) != EOF){
		int c1 = 0, c2 = 0, x = 0, y = 0;
		int check = 0, i, j;
		for (i = 0; i < big; i++){
			for (j = 0; j < big; j++){
				scanf("%d", &all[i][j]);
				check += all[i][j];
			}
			if (check % 2){
				c1++;
				x = i;
			}
			check = 0;
		}
		for (j = 0; j < big; j++){
			for (i = 0; i < big; i++){
				check += all[i][j];
			}
			if (check % 2){
				c2++;
				y = j;
			}
			check = 0;
		}
		if (c1>1 || c2 > 1){
			printf("Corrupt\n");
		}
		else if (c1 == 0 && c2 == 0){
			printf("OK\n");
		}
		else{
			printf("Change bit (%d,%d)\n", x + 1, y + 1);
		}
	}
	return 0;
}
