#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[1000000];
long long int all[4][30] = { 0 };
long long int sum[30] = { 0 };
int main()
{
	int count = 0, max = 0, j = 0, k = 0, line = 0;
	for (j = 0; j <= 3; j++){
		for (k = 0; k <= 29; k++){
			all[j][k] = 0;
			sum[k] = 0;
		}
	}
	while (gets(s)){
		int i = 0, len = 0;
		len = strlen(s);
		for (i = 0; i < len; i++){
			char t[30] = { '\0' };
			int start = 0;
			if (s[i] >= 48 && s[i] <= 57){
				while (s[i] >= 48 && s[i] <= 57) t[start++] = s[i++];
					sum[count++] = atoi(t);
			}
			else{
				continue;
			}
			if (start > max){
				max = start;
			}
		}
	}
	printf("%lld %lld %lld\n", sum[0], sum[1], sum[0] + sum[1]);
	return 0;
}
