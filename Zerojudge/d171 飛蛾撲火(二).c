#include<stdio.h>
#include<math.h>
int main()
{
	long long unsigned n, m;
	while (scanf("%llu%llu", &n, &m) != EOF){
		long long unsigned ans = 0;
		ans = m*log10(n)+1;
		printf("%llu\n", ans);
	}
	return 0;
}
