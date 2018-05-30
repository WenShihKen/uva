#include<stdio.h>
int main()
{
	int days;
	long long int fsum = 0, gsum = 0;
	int count;
	while (scanf("%d", &days) != EOF){
		for (count = 1; count <= days; count++){
			fsum += count;
			gsum += fsum;
		}
		printf("%lld %lld\n", fsum, gsum);
		fsum = 0; gsum = 0;
	}
	return 0;
}
