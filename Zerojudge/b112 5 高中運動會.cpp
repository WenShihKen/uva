#include<stdio.h>
#include<math.h>
int all[1000];
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, max = 0, j, gcd = 0, count = 0, min = 9999999;
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
			if (all[i] >= max){
				max = all[i];
			}
			if (min>all[i]){
				min = all[i];
			}
		}
		for (i = 1; i <= min; i++){
			for (j = 0; j < many; j++){
				if (all[j] % i == 0){
					count++;
				}
			}
			if (count == many){
				gcd = i;
			}
			count = 0; j = 0;
		}
		printf("%d\n", gcd);
	}
	return 0;
}
