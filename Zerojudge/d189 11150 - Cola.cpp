#include<stdio.h>
int main()
{
	int full;
	while (scanf("%d", &full) != EOF){
		int sum = 0, empty = 1, temp;
		sum = full;
		empty = full + 1;
		while (empty >= 3){
			temp = empty % 3;
			empty /= 3;
			sum += empty;
			empty = empty + temp;
		}
		printf("%d\n", sum);
	}
	return 0;
}
