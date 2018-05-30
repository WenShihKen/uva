#include<stdio.h>
long long int len[46] = { 0 };
int main()
{
	len[1] = 1; len[2] = 2;
	int i;
	for (i = 3; i <= 45; i++){
		len[i] = len[i - 2] + len[i - 1];
	}
	int find;
	while (scanf("%d", &find) != EOF){
		printf("%lld\n", len[find]);
	}
	return 0;
}
