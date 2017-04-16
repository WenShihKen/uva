#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--) {
		long long int len, wid;
		scanf("%lld%lld", &len, &wid);
		printf("%lld\n", (len / 3)*(wid / 3));
	}
	return 0;
}
