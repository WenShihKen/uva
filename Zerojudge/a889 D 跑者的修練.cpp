#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		long long int slow, day, sum = 0;
		long long int count = 0, next = 1, other = 0;
		scanf("%lld%lld", &slow, &day);
		count = day / slow ;
		other = day - (slow * count);
		sum = day*(day + 1) / 2;
		sum += (((count*(count-1)) / 2) * slow) + (other*(count));
		printf("%lld\n", sum);
	}
	return 0;
}
