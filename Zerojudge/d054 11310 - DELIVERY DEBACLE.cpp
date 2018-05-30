#include<stdio.h>
long long int all[50] = { 0 };
int main()
{
	all[0] = 1;
	all[1] = 1;
	all[2] = 5;
	long long int i, j;
	for (i = 3; i <= 40; i++){
		all[i] = all[i - 1] + all[i - 2] * 4 + all[i - 3] * 2;
	}
	long long int time;
	scanf("%lld", &time);
	while (time--){
		long long int find;
		scanf("%lld", &find);
		printf("%lld\n", all[find]);
	}
	return 0;
}
