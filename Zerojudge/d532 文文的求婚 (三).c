#include<stdio.h>
int main()
{
	long long int start, end;
	while (scanf("%lld%lld", &start, &end) != EOF){
		long long int count, sum = 0;
		for (count = start; count <= end; count += 1){
			if (count % 4 == 0 && count % 100 != 0 || count % 400 == 0){
				sum += 1;
			}
			else{
				continue;
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
