#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long int in1, in2;
		scanf("%lld%lld", &in1, &in2);
		if (in2%in1) {
			printf("-1\n");
		}
		else {
			printf("%lld %lld\n", in1, in2);
		}
	}
	return 0;
}
