#include<stdio.h>
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, all[1005], j, temp1, temp2;
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
		}
		for (i = 1; i < many; i++){
			for (j = 0; j < many-1; j++){
				if (all[j] % 10 > all[j + 1] % 10){
					temp1 = all[j];
					all[j] = all[j + 1];
					all[j + 1] = temp1;
				}
			}
		}
		for (i = 1; i < many; i++){
			for (j = 0; j < many-1; j++){
				if (all[j] % 10 == all[j + 1] % 10 && all[j] / 10 < all[j + 1] / 10){
					temp2 = all[j];
					all[j] = all[j + 1];
					all[j + 1] = temp2;
				}
			}
		}
		for (i = 0; i < many; i++){
			printf("%d ", all[i]);
		}
		printf("\n");
	}
	return 0;
}
