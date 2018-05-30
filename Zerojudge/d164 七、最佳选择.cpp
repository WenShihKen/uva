#include<stdio.h>
int all[10005];
int main()
{
	int many, buy;
	while (scanf("%d%d", &many, &buy) != EOF){
		int i, max = 0, temp = 0, j = 0, count;
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
		}
		for (i = 0; i < many; i++){
			if (i == many){
				break;
			}
			for (j = i, count = 0; count < buy; j++, count++){
				temp += all[j%many];
			}
			if (temp >= max){
				max = temp;
			}
			temp = 0;
		}
		printf("%d\n", max);
	}
	return 0;
}
