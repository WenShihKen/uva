#include<stdio.h>
int in1[15][15];
int out1[15][15];
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int x, y;
		scanf("%d%d", &x, &y);
		int i, j, i1 = 0, j1 = 0;
		for (i = 0; i < 15; i++){
			for (j = 0; j < 15; j++){
				in1[i][j] = 0;
				out1[i][j] = 0;
			}
		}
		for (i = 0; i < x; i++){
			for (j = 0; j < y; j++){
				scanf("%d", &in1[i][j]);
			}
		}
		for (i = x - 1, i1 = 0; i >= 0; i--, i1++){
			for (j = y - 1, j1 = 0; j >= 0; j--, j1++){
				out1[i][j] = in1[i1][j1];
			}
		}
		int check = 1;
		for (i = 0; i < x; i++){
			for (j = 0; j < y; j++){
				if (out1[i][j] == in1[i][j]){
					continue;
				}
				else{
					check = 0;
					break;
				}
			}
		}
		if (check){
			printf("go forward\n");
		}
		else{
			printf("keep defending\n");
		}
	}
	return 0;
}
