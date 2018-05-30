#include<stdio.h>
int main()
{
	long long int time;
	scanf("%lld", &time);
	while (time--){
		long double a1, a2, b1, b2;
		scanf("%llf%llf%llf%llf", &a1, &a2, &b1, &b2);
		if (a2 == 0.0 && b2 == 0.0){
			if (a1 > b1){
				printf(">\n");
			}
			else if (a1 < b1){
				printf("<\n");
			}
			else if (a1 == b1){
				printf("=\n");
			}
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
