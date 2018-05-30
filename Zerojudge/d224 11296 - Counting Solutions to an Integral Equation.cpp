#include<stdio.h>
long long int a[1000005] = { 0 };
int main()
{
	long long int num, i;
	a[0] = 1; a[1] = 1;
	for (i = 3; i <= 1000003; i += 2){
		a[i] = a[i - 2] + (i / 2) + 1;
		a[i - 1] = a[i];
	}
	while (scanf("%lld", &num) != EOF){
		printf("%lld\n", a[num]);
	}
	return 0;
}
