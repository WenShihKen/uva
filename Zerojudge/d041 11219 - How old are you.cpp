#include<stdio.h>
int main()
{
	int time, count = 1;
	scanf("%d", &time);
	while (time--){
		int have = 1;
		int day1, month1, year1, day2, month2, year2, old = 0; /*1是現在 2是出生*/
		scanf("%d/%d/%d", &day1, &month1, &year1);
		scanf("%d/%d/%d", &day2, &month2, &year2);
		if (year1 < year2){
			printf("Case #%d: Invalid birth date\n", count);
		}
		else if (year1 == year2){
			if ((month1 < month2) || (month1 == month2&&day1 < day2)){
				printf("Case #%d: Invalid birth date\n", count);
			}
			else{
				printf("Case #%d: %d\n", count, old);
			}
		}
		else{
			old = year1 - year2;
			if ((month1 < month2) || (month1 == month2&&day1 < day2)){
				old--;
			}
			if (old > 130){
				printf("Case #%d: Check birth date\n", count);
			}
			else{
				printf("Case #%d: %d\n", count, old);
			}
		}
		count++;
	}
	return 0;
}
