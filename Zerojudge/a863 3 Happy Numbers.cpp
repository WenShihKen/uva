#include<stdio.h>
int main()
{
	int num;
	while (scanf("%d", &num) != EOF){
		int round = 0, temp = 0, ans;
		ans = num;
		while (temp != 1){
			temp = 0;
			while (num > 0){
				temp += (num % 10)*(num % 10);
				num /= 10;
			}
			num = temp;
			round++;
			if (round > 100){
				break;
			}
		}
		if (temp == 1){
			printf("%d is a happy number\n", ans);
		}
		else{
			printf("%d is an unhappy number\n", ans);
		}
	}
	return 0;
}
