#include<stdio.h>
int main()
{
	int times;
	scanf("%d", ×);
	while (times > 0){
		long long int a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a == 1){
			printf("%lld\n", b + c);
		}
		else if (a == 2){
			printf("%lld\n", b - c);
		}
		else if (a == 3){
			printf("%lld\n", b*c);
		}
		else if (a == 4){
			printf("%lld\n", b / c);
		}
		times--;
	}
	return 0;
}
