#include<stdio.h>
int main()
{
	long long int num;
	while (scanf("%lld", &num) != EOF){
		if (num >= 0){
			printf("%lld", num);
		}
		else if (num < 0){
			printf("%lld\n", 0 - num);
		}
	}
	return 0;
}
