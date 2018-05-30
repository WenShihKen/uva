#include<stdio.h>
int main()
{
	int a, b, i;
	while (scanf("%d%d", &a, &b) != EOF){
		if (a > b){
			for (i = b; i >= 1; i--){
				if (a%i == 0 && b%i == 0){
					break;
				}
				else{
					continue;
				}
			}
		}
		if (a < b){
			for (i = a; i >= 1; i--){
				if (a%i == 0 && b%i == 0){
					break;
				}
				else{
					continue;
				}
			}
		}
		if (a == b){
			for (i = b; i >= 1; i--){
				if (a%i == 0 && b%i == 0){
					break;
				}
				else{
					continue;
				}
			}
		}
		printf("%d\n", i);
	}
	return 0;
}
