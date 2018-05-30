#include<stdio.h>
#include<math.h>
int prime[1000005];
int main()
{
	int i, j;
	for (i = 1; i <= 1000000; i++){
		prime[i] = 0;
	}
	prime[1] = 1;
	for (i = 2; i <= 1000000; i++){
		for (j = 2; j <= sqrtl(i); j++){
			if (i%j == 0){
				prime[i] = 1;
				break;
			}
		}
		j = 2;
	}
	int find;
	while (scanf("%d", &find) != EOF){
		if (find == 0)
			break;
		if (prime[find]){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}
