#include<stdio.h>
int main()
{
	int start, end;
	int count = 0, temp;
	int sum = 0;
	while (scanf("%d%d", &start, &end) != EOF){
		do{
			sum += start;
			count++;
			start++;
		} while (sum <= end);
		printf("%d\n", count);
		sum = 0; count = 0;
	}
	return 0;
}
