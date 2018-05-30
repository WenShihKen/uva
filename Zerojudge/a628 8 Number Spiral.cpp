#include<stdio.h>
int all[25][25];
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		int i, j, place, i1, j1 = in1;
		int right, down1, down2, time = in1 / 2, temp = in1;
		right = in1 - 1;
		down1 = in1 - 1;
		down2 = in1 - 2;
		for (i = 0; i <= 25; i++){
			for (j = 0; j <= 25; j++){
				all[i][j] = 0;
			}
		}
		for (i = in1, j = 1, place = 1; i >= 0; i-=2){
			all[place][place] = (i - j)*(i - j);
			place++;
		}  /*次數*/
		for (j = 1; j <= time; j++){   /*位置運算*/
			for (i1 = j; i1 <= right; i1++){   /*最上層往右扣*/
				all[j][i1 + 1] = all[j][i1]-1;
			}
			for (i1 = j; i1 <= down1; i1++){      /*最左層往下加*/
				all[i1 + 1][j] = all[i1][j] + 1;
			}
			for (i1 = j; i1 <= right; i1++){      /*最下層往右加*/
				all[j1][i1 + 1] = all[j1][i1] + 1;
			}
			for (i1 = j; i1 <= down2; i1++){     /*最右層往下扣*/
				all[i1 + 1][j1] = all[i1][j1] - 1;
			}
			right--; down1--; down2--; j1--;
		}
		for (i = 1; i <= temp; i++){
			for (j = 1; j <= temp; j++){
				printf("%4d", all[i][j]);
			}
			printf("\n");
		}
	}
}
