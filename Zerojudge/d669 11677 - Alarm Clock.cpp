#include<stdio.h>
#include<math.h>
int main()
{
	int start_hour, start_min, end_hour, end_min;
	while (scanf("%d%d%d%d", &start_hour, &start_min, &end_hour, &end_min) != EOF){
		int temp1, temp2, sleep_min = 0;
		if (start_hour == 0 && start_min == 0 && end_hour == 0 && end_min == 0){
			break;
		}
		temp1 = start_hour * 60 + start_min;
		temp2 = end_hour * 60 + end_min;
		if (temp1 > temp2){
			sleep_min = (temp2 - temp1) + 1440;
		}
		else if (temp1 <= temp2){
			sleep_min = temp2 - temp1;
		}
		printf("%d\n", sleep_min);
	}
	return 0;
}
