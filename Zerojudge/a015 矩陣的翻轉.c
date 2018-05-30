#include<stdio.h>
int main()
{
	int a, b, x, y, x1, y1;
	int a1[100][100];
	while (scanf("%d%d", &a, &b) != EOF){
		for (x = 0; x < a; x++){
			for (y = 0; y < b; y++){
				scanf("%d", &a1[x][y]);
			}
		}
		for (y1 = 0; y1 < b; y1++){
			for (x1 = 0; x1 < a; x1++){
				printf("%d ", a1[x1][y1]);
			}
			printf("\n");
		}
	}
	return 0;
}
