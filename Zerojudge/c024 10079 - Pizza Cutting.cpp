#include<stdio.h>
int main()
{
	long long int cut;
	while (scanf("%lld", &cut) != EOF){
		if (cut < 0){
			break;
		}
		else{
			printf("%lld\n", ((cut + 1)*cut) / 2 + 1);
		}
	}
	return 0;
}
