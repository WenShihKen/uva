#include<stdio.h>
int all[100];
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, temp, max = 0, j;
		for (i = 0; i < 100; i++){
			all[i] = 0;
		}
		for (i = 0; i < many; i++){
			scanf("%d", &temp);
			all[temp]++;
		}
		for (i = 0; i < 10; i++){
			if (all[i]>max){
				max = all[i];
			}
		}
		for (i = max; i >= 1; i--){
			for (j = 0; j < 10; j++){
				if (i == all[j]){
					printf("%d ", j);
				}
			}
			j = 0;
		}
		printf("\n");
	}
	return 0;
}
