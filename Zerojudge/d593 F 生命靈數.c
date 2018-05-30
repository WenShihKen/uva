#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int in1;
		scanf("%d", &in1);
		int temp = in1, sum = 0;
		while (1){
			while (temp > 0){
				sum += temp % 10;
				temp /= 10;
			}
			temp = sum;
			if (sum < 10){
				break;
			}
			sum = 0;
		}
		if (sum == 2){
			printf("2, Yes\n");
		}
		else{
			printf("%d, No\n", sum);
		}
	}
	return 0;
}
