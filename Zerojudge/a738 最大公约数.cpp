#include<stdio.h>
int main()
{
	long long int a, b;
	while (scanf("%lld%lld", &a, &b) != EOF){
		while (a != 0 && b != 0){
			if (a >= b){
				a = a%b;
			}
			else{
				b = b%a;
			}
		}
		if (a == 0){
			printf("%lld\n", b);
		}
		else if (b == 0){
			printf("%lld\n", a);
		}
	}
	return 0;
}
