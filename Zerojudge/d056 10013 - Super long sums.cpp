#include<stdio.h>
int in1[1000001] = { 0 };
int in2[1000001] = { 0 };
int temp[1000001] = { 0 };
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int many, i = 0, ex = 0;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d%d", &in1[i], &in2[i]);
		}
		for (i = many - 1; i >= 0; i--){
			if (in1[i] + in2[i] >= 10){
				temp[i] = in1[i] + in2[i] + ex;
				temp[i] %= 10;
				ex = 1;
			}
			else{
				temp[i] = in1[i] + in2[i] + ex;
				if (temp[i] >= 10){
					temp[i] %= 10;
					ex = 1;
				}
				else{
					ex = 0;
				}
			}
		}
		for (i = 0; i < many; i++){
			printf("%d", temp[i]);
		}
		printf("\n");
	}
	return 0;
}
