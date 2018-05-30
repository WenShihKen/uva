#include<stdio.h>
int main()
{
	long long int n, m;
	while (scanf("%lld%lld", &n, &m) != EOF){
		long long int last = 0;
		if (n == m){
			last = n;
		}
		else{
			while (n != m){
				if (n < m){
					m -= n;
				}
				else{
					n -= m;
				}
			}
			last = n;
		}
		printf("%lld\n", last);
	}
	return 0;
}
