#include<stdio.h>
int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		long long int a[10005] = { 0 }, i;
		a[1] = 1; a[2] = 1;
		for (i = 3; i <= 10002; i++){
			a[i] = (a[i - 1] + a[i - 2]) % 2012;
		}
		printf("%lld\n", a[in1 + 1]);
	}
	return 0;
}
