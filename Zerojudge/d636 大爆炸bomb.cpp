#include<stdio.h>
#define m 10007
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2)!=EOF){
		long long int ans = 1;
		while (in2){
			if (in2 % 2==1){
				ans = (ans*in1) % m;
			}
			in1 = (in1*in1) % m;
			in2 /= 2;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
