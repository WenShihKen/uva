#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many;
		scanf("%d", &many);
		int max = 0, stay = 0, i, temp = 0;
		for (i = 0; i < many; i++){
			int in1;
			scanf("%d", &in1);
			if (i&&in1 - temp > max){
				max = in1 - temp;
				stay = i;
			}
			temp = in1;
		}
		printf("%d\n", stay);
	}
	return 0;
}
