#include<stdio.h>
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF){
		if (n == 0 &&m == 0){
			break;
		}
		else if ((n % 2 == 1 && m % 2 == 1) || (n % 2 == 0 && m % 2 == 0)){
			printf("Win\n");
		}
		else{
			printf("Loss\n");
		}
	}
	return 0;
}
