#include<stdio.h>
int main()
{
	int time, temp;
	scanf("%d", &time);
	temp = 1;
	while (temp<=time){
		int num, temp1 = 0, find = 0, temp_n;
		scanf("%d", &num);
		temp_n = num;
		while (1){
			while (num > 0){
				temp1 += (num % 10)*(num % 10);
				num /= 10;
			}
			if (temp1 == 1){
				find++;
				break;
			}
			else if (temp1 == 4){
				break;
			}
			num = temp1;
			temp1 = 0;
		}
		if (find == 1){
			printf("Case #%d: %d is a Happy number.\n", temp, temp_n);
		}
		else{
			printf("Case #%d: %d is an Unhappy number.\n", temp, temp_n);
		}
		temp++;
	}
	return 0;
}
