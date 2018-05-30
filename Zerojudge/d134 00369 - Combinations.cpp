#include<stdio.h>
int main()
{
	long double N, M;
	while (scanf("%llf%llf", &N, &M) != EOF){
		if (N == 0 && M == 0){
			break;
		}
		long double ans, tempN = 1, tempM = 1, i;
		if (N == M||M==0){
			ans = 1;
		}
		else if (N - M >= M){
			for (i = N; i > N - M; i--){
				tempN *= i;
			}
			for (i = M; i >= 1; i--){
				tempM *= i;
			}
			ans = tempN / tempM;
		}
		else if (N-M<M){
			for (i = N; i > M; i--){
				tempN *= i;
			}
			for (i = N-M; i >= 1; i--){
				tempM *= i;
			}
			ans = tempN / tempM;
		}
		printf("%.0llf things taken %.0llf at a time is %.0llf exactly.\n", N, M, ans);
	}
	return 0;
}
