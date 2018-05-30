#include<stdio.h>
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		if (many == 0){
			break;
		}
		int i, count = 0;
		double all[10000], sum = 0.0, ave;
		for (i = 0; i < many; i++){
			scanf("%lf", &all[i]);
			sum += all[i];
		}
		ave = sum / many;
		for (i = 0; i < many; i++){
			if (all[i] < ave){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
