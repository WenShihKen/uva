#include<stdio.h>
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, left_sum = 0, right_sum = 0, money;
		for (i = 1; i <= many; i++){
			scanf("%d", &money);
			if (i % 2){
				left_sum += money;
			}
			else{
				right_sum += money;
			}
		}
		if (right_sum > left_sum){
			printf("right\n");
		}
		else{
			printf("left\n");
		}
	}
	return 0;
}
