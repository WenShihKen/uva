#include<stdio.h>
long long int gcd(long long int a, long long int b)
{
	long long int temp = 0;
	while (a%b){
		temp = b;
		b = a%b;
		a = temp;
	}
	return b;
}
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2) != EOF){
		printf("%lld\n", in1 + in2 - gcd(in1, in2));
	}
	return 0;
}
