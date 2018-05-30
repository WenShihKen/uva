#include<stdio.h>
int main()
{
	int d;
	while (scanf("%d", &d) != EOF){  //d為公差 
		long long int sum = 3, i, temp1=1, temp2 = 2;
		for (i = 0; i < 48; i++){
			temp1 = temp1 + d;
			temp2 = temp2 + temp1;
			sum = sum + temp2;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
