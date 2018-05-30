#include<stdio.h>
int main()
{
	long long int x1, y1, x2, y2;
	while (scanf("%lld%lld%lld%lld", &x1, &y1, &x2, &y2) != EOF){
		long long int l[105][105], r[105][105], ans[105][105] = { 0 }, i, j, count;
		if (y1 != x2){
			printf("Error\n");
		}
		else{
			for (i = 1; i <= x1; i++){
				for (j = 1; j <= y1; j++){
					scanf("%lld", &l[i][j]);
				}
			}
			for (i = 1; i <= x2; i++){
				for (j = 1; j <= y2; j++){
					scanf("%lld", &r[i][j]);
				}
			}
			for (i = 1; i <= x1; i++){
				for (j = 1; j <= y2; j++){
					for (count = 1; count <= y1; count++){
						ans[i][j] += l[i][count] * r[count][j];
					}
				}
			}
			for (i = 1; i <= x1; i++){
				for (j = 1; j <= y2; j++){
					printf("%lld ", ans[i][j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
