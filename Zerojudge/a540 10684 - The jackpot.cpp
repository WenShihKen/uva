#include<stdio.h>
int in1[10005] = { 0 };
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		if (many == 0)
			break;
		int i, j, min = -99999999;
		for (i = 0; i < 10004; i++){
			in1[i] = 0;
		}
		for (i = 0; i < many; i++){
			scanf("%d", &in1[i]);
		}
		for (i = 0; i < many; i++){
			int temp = 0;
			for (j = i; j < many; j++){
				temp += in1[j];
				if (temp > min){
					min = temp;
				}
			}
		}
		if (min > 0){
			printf("The maximum winning streak is %d.\n", min);
		}
		else{
			printf("Losing streak.\n");
		}
	}
	return 0;
}
