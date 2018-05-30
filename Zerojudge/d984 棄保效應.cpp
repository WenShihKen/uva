#include<stdio.h>
int main()
{
	long long int a, b, c;
	while (scanf("%lld%lld%lld", &a, &b, &c) != EOF){
		if (a >= b&&a >= c){
			if (b >= c){
				if (b + c > a){
					printf("B\n");
				}
				else{
					printf("A\n");
				}
			}
			else{
				if (b + c > a){
					printf("C\n");
				}
				else{
					printf("A\n");
				}
			}
		}
		else if (b >= a&&b >= c){
			if (a >= c){
				if (a + c > b){
					printf("A\n");
				}
				else{
					printf("B\n");
				}
			}
			else{
				if (a + c > b){
					printf("C\n");
				}
				else{
					printf("B\n");
				}
			}
		}
		else if (c >= a&&c >= b){
			if (a >= b){
				if (a + b > c){
					printf("A\n");
				}
				else{
					printf("C\n");
				}
			}
			else{
				if (a + b > c){
					printf("B\n");
				}
				else{
					printf("C\n");
				}
			}
		}
	}
	return 0;
}
