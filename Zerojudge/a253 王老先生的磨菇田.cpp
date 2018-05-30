#include<stdio.h>
int main()
{
	int i, max = 0, num, how, count[105] = { 0 };
	for (i = 0; i < 2; i++){
		while (scanf("%d", &num) && num >= 0){
			scanf("%d", &how);
			if (count[num] == 0){
				count[num] = how;
			}
			else{
				count[num] += how;
			}
			if (max <= num){
				max = num;
			}
		}
	}
	for (i = 0; i <= max; i++){
		if (count[i] != 0){
			printf("%d %d\n", i, count[i]);
		}
	}
	return 0;
}
