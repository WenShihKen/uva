#include<stdio.h>
int main()
{
	long long int in;
	while (scanf("%lld", &in) != EOF){
		long long int sum = 0;
		if (in == 0){
			break;
		}
		else{
			while (in > 0){
				sum += (in*in);
				in--;
			}
			printf("%lld\n", sum);
		}
	}
	return 0;
}
