#include<stdio.h>
#include<math.h>
long long int all(int a)
{
	long long int sum = 0, temp = sqrtl(a);
	int i;
	for (i = 1; i <= temp; i++) {
		sum += a / i;
	}
	return sum * 2 - temp*temp;
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time--) {
		int end;
		scanf("%d", &end);
		printf("%lld\n", all(end));
	}
	return 0;
}
