#include<stdio.h>
int all[505][505] = { 0 };
int main(){
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int i, j;
		for (i = 0; i < 504; i++){
			for (j = 0; j < 504; j++){
				all[i][j] = 0;
			}
		}
		for (i = 1; i <= in1; i++){
			for (j = 1; j <= in1; j++){
				int in3;
				scanf("%d", &in3);
				all[i][j] = in3 + all[i - 1][j] + all[i][j - 1] - all[i - 1][j - 1];
			}
		}

		for (int i = 0, x1, y1, x2, y2; i < in2; i++){
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			printf("%d\n", all[x2][y2] - all[x2][y1 - 1] - all[x1 - 1][y2] + all[x1 - 1][y1 - 1]);
		}
	}
}
