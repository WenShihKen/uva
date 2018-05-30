#include<stdio.h>
int main()
{
	long long int a, b, c;
	while (scanf("%lld%lld%lld", &a, &b, &c) != EOF){
		long long int count, sum = 0;
		for (count = 1; count <= c; count++){
			if (count%a == 0 || count%b == 0){
				sum += count;
			}
			else{
				continue;
			}
		}
		printf("%c\n", ((sum-1)%26)+'A');
	}
	return 0;
}
