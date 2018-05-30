#include<stdio.h>
int all[30005];
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i;
		for (i = 0; i < 30000; i++){
			all[i] = 0;
		}
		for (i = 0; i < many; i++){
			int in1;
			scanf("%d", &in1);
			all[in1]++;
		}
		int max = 0;
		for (i = 0; i < 30001; i++){
			max = all[i]>max ? all[i] : max;
		}
		for (i = 0; i < 30001; i++){
			if (all[i] == max){
				printf("%d %d\n", i, max);
			}
		}
	}
	return 0;
}
