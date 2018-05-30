#include<stdio.h>
#include<math.h>
int main()
{
	long long int a, b, c;
	while (scanf("%lld%lld%lld", &a, &b, &c) != EOF){
		long long int area = 0, temp = 0;
		temp = (a + b + c) / 2;
		area = temp*(temp - a)*(temp - b)*(temp - c);
		printf("%lld\n", area);
	}
	return 0;
}
