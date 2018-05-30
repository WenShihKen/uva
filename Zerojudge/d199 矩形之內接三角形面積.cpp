#include<stdio.h>
#include<math.h>
int main()
{
	double in1, in2, in3;
	while (scanf("%lf%lf%lf", &in1, &in2, &in3) != EOF){
		long long int ans;
		ans = sqrt((in1 + in2 + in3)*(in1 + in2 + in3) - 4 * in1*in3);
		printf("%lld\n", ans);
	}
	return 0;
}
