#include<stdio.h>
int main()
{
	long long int len;
	while (scanf("%lld", &len) != EOF){
		if (len == 0)
			break;
		long long int all[51] = { 0 }, i;
		all[1] = 1;
		all[2] = 2;
		for (i = 3; i <= len; i++){
			all[i] = all[i - 1] + all[i - 2];
		}
		printf("%lld\n", all[len]);
	}
	return 0;
}
