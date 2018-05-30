#include<stdio.h>
double all[200];
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int many, i;
		double sum = 0.0;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%lf", &all[i]);
			sum += all[i];
		}
		printf("%.2lf\n", sum / many);
	}
	return 0;
}
