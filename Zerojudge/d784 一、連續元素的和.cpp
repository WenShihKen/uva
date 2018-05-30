#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int many, in[105] = { 0 };
		int i, max = -9999999, j, sum = 0;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d", &in[i]);
		}
		for (i = 0; i < many; i++){
			for (j = i; j < many; j++){
				sum += in[j];
				if (sum >= max){
					max = sum;
				}
			}
			sum = 0;
		}
		printf("%d\n", max);
	}
	return 0;
}
