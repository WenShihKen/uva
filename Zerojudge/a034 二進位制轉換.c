#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b = 0, num, temp, a[20];
	while (scanf(" %d", &num) != EOF){
		if (num == 0){
			printf("0\n"); 
		}
		while (num >= 1){
			temp = num % 2;
			num = (num - temp) / 2;
			a[b++] = temp;
		}
		for (num = b - 1; num >= 0; num--){
			printf("%d", a[num]);
		}
		b = 0; num = 0; temp = 0; a[20] = 0;
		printf("\n");
	}
	return 0;
}
