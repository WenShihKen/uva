#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int ball, many[1005] = { 0 }, weight[1005] = { 0 };
		int i, j;
		scanf("%d", &ball);
		for (i = 0; i < ball; i++){
			scanf("%d", &many[i]);
		}
		for (i = 0; i < ball; i++){
			scanf("%d", &weight[i]);
		}
		int eat = 0;
		for (i = 0; i < ball; i++){
			for (j = 0; j < ball-1; j++){
				if (many[j]>many[j + 1]){
					int temp = many[j];
					many[j] = many[j + 1];
					many[j + 1] = temp;
					int temp1 = weight[j];
					weight[j] = weight[j + 1];
					weight[j + 1] = temp1;
					eat += (weight[j] + weight[j + 1]);
					printf("\n");
				}
			}
		}
		printf("%d\n", eat);
	}
	return 0;
}
