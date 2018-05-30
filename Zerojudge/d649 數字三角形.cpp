#include<stdio.h>
int main()
{
	int length;
	while (scanf("%d", &length) != EOF){
		int i, j, temp, temp1;
		temp = length;
		for (i = 1; i <= length; i++){
			for (j = 0; j < (temp-1); j++){
				printf("_");
			}
			temp1 = i;
			while (temp1 > 0){
				printf("+");
				temp1--;
			}
			printf("\n");
			temp--;
		}
	}
	return 0;
}
