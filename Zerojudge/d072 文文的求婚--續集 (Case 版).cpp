#include<stdio.h>
int main()
{
	int year;
	int times, count = 1;
	scanf("%d", ×);
	while (count<=times){
		scanf("%d", &year);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			printf("Case %d: a leap year\n", count);
		}
		else{
			printf("Case %d: a normal year\n", count);
		}
		count++;
	}
	return 0;
}
