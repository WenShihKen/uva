#include<stdio.h>
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2) != EOF){
		long long int ans = 0, i, temp1 = 1, temp2 = 1;
		if (in2 == 0||in1==in2){
			ans = 1;
		}
		else if (in1 - in2 > in2){
			for (i = in1; i > in1 - in2; i--){
				temp1 *= i;
			}
			for (i = in2; i > 1; i--){
				temp2 *= i;
			}
			ans = temp1 / temp2;
		}
		else{
			for (i = in1; i > in2; i--){
				temp1 *= i;
			}
			for (i = in1 - in2; i > 1; i--){
				temp2 *= i;
			}
			ans = temp1 / temp2;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
