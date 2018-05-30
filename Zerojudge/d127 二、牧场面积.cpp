#include<stdio.h>
int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		long long int temp1 = 1, temp2 = (in1 / 2) - 1;
		long long int i, j, max = 0;
		for (i = temp1, j = temp2; i <= temp2 / 2, j >= 1; i++, j--){
			if (i*j >= max){
				max = i*j;
			}
		}
		printf("%lld\n", max);
	}
	return 0;
}
