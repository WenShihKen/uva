#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		long long int in1, in2, temp1, i, sum1 = 1, temp2, sum2_1 = 1, sum2_2 = 1;
		scanf("%lld%lld", &in1, &in2);
		if (in1 == 1 && in2 == 1){
			printf("1\n");
		}
		else if ((in1 == 1 || in1 == 2) && (in2 == 1 || in2 == 2)){
			printf("1\n");
		}
		else if (in2 == 1 || in2 == in1){
			printf("1\n");
		}
		else{
			temp1 = in1 - 1;
			temp2 = in2 - 1;
			for (i = 1; i <= temp1; i++){
				sum1 *= i;
			}
			for (i = 1; i <= temp2; i++){
				sum2_1 *= i;
			}
			for (i = 1; i <= temp1 - temp2; i++){
				sum2_2 *= i;
			}
			printf("%lld\n", sum1 / (sum2_1*sum2_2));
		}
		time--;
	}
	return 0;
}
