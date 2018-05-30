#include<stdio.h>
int main()
{
	int num;
	while (scanf("%d", &num) != EOF){
		int a[10000], i = 0, j, count = 0;
		if (num == 0){
			break;
		}
		printf("The parity of ");
		while (num > 0){
			a[i] = num % 2;
			num /= 2;
			if (a[i] == 1){
				count++;
			}
			i++;
		}
		for (j = i - 1; j >= 0; j--){
			printf("%d", a[j]);
		}
		printf(" is %d (mod 2).\n", count);
	}
	return 0;
}
