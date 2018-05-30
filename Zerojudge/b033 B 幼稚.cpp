#include<stdio.h>
int main()
{
	long long int m, n, p, r;
	while (scanf("%lld%lld%lld%lld", &m, &n, &p, &r) != EOF){
		int count = (m < n);
		if (m + n + p + r == 0)
			break;
		long long int last = 1;
		while (p > 0){
			last *= 10;
			p--;
		}
		if (m == n){
			int i;
			for (i = 0; i < r; i++){
				m = (m*n) % last;
				n = m;
			}
			printf("Draw with %lld.\n", m);
		}
		else{
			int i;
			for (i = 0; i < r; i++){
				if (count){
					m = (m*n) % last;
					count = 0;
				}
				else{
					n = (m*n) % last;
					count = 1;
				}
			}
			if (count == 0){
				printf("The king of childish won the game with %lld.\n", m);
			}
			else{
				printf("The ghost of childish won the game with %lld.\n", n);
			}
		}
	}
	return 0;
}
