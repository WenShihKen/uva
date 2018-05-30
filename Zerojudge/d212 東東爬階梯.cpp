#include<stdio.h>
int main()
{
	long long int n;
	while (scanf("%lld", &n) != EOF){
		long long int floor[1000], count;
		floor[1] = 1;
		floor[2] = 2;
		for (count = 3; count < 100; count++){
			floor[count] = floor[count - 1] + floor[count - 2];
		}
		printf("%lld\n", floor[n]);
	}
	return 0;
}
