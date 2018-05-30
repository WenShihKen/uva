#include<stdio.h>
int main()
{
	long long int year;
	while (scanf("%lld", &year) != EOF){
		printf("%lld\n", year - 1911);
	}
	return 0;
}
