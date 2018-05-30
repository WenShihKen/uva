#include<stdio.h>
int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		long long int len = 1, temp = 1;
		while (temp%in1 != 0){
			temp = ((temp * 10) + 1) % in1;
			len++;
		}
		printf("%lld\n", len);
	}
	return 0;
}
