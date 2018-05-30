#include<stdio.h>
int main()
{
	int time;
	int longnumber, sum = 1;
	int temp = 0;
	scanf("%d", &time);
	while (time > 0){
		scanf("%d", &longnumber);
		if (longnumber == 0){
			sum = 0;
		}
		while (longnumber != 0){
			temp = longnumber % 10;
			sum *= temp;
			temp = 0;
			longnumber /= 10;
		}
		printf("%d\n", sum);
		sum = 1;
		time--;
	}
	return 0;
}
