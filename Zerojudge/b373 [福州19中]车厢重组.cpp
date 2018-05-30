#include<stdio.h>
int in1[10001];
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, j, time = 0;
		for (i = 0; i < many; i++){
			in1[i] = 0;
			scanf("%d", &in1[i]);
		}
		for (i = 0; i < many; i++){
			for (j = i + 1; j < many; j++){
				if (in1[i] > in1[j]){
					int t;
					t = in1[i];
					in1[i] = in1[j];
					in1[j] = t;
					time++;
				}
			}
		}
		printf("%d\n", time);
	}
	return 0;
}
