#include<stdio.h>
int main()
{
	int num;
	int count;
	while (scanf("%d", &num) != EOF){
		if (num == 0){
			break;
		}
		for (count = 1; count < num; count++){
			if (count % 7 == 0){
				continue;
			}
			printf("%d ", count);
		}
		printf("\n");
	}
	return 0;
}
