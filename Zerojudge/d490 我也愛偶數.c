#include<stdio.h>
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2) != EOF){
		long long int count, sum = 0;
		for (count = in1; count <= in2; count++){
			if (count % 2 == 0){
				sum += count;
			}
			else{
				continue;
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
