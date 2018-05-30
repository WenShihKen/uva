#include<stdio.h>
int main()
{
	long long int num;
	while (scanf("%lld", &num) != EOF){
		long long int count, a[100001];
		for (count = 0; count < num; count++){
			scanf("%lld", &a[count]);
		}
		for (count = 1; count <= num; count++){
			printf("%lld ", count);
		}
		printf("\n");
	}
	return 0;
}
