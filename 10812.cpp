#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		long long int s, d, a, b;
		scanf("%lld%lld", &s, &d);
		a = s + d; b = s - d;
		if ((a % 2 == 1 || b % 2 == 1) || b < 0){
			printf("impossible\n");
		}
		else{
			printf("%lld %lld\n", a / 2, b / 2);
		}
		time--;
	}
	return 0;
}
