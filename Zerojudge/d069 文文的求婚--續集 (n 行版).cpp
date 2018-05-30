#include<stdio.h>
int main()
{
	int times;
	int year;
	scanf("%d", ×);
	while (times>0){
		scanf("%d", &year);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			printf("a leap year\n");
		}
		else{
			printf("a normal year\n");
		}
		times--;
	}
	return 0;
}
