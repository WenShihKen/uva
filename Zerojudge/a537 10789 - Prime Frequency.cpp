#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int time, round = 1;
	scanf("%d\n", &time);
	while (time--){
		char s[2005];
		int count[135], i, len, all[135] = { 0 };
		int j, zero = 0;
		for (i = 0; i <= 129; i++){
			count[i] = 0;
			all[i] = 0;
		}
		gets(s);
		len = strlen(s);
		printf("Case %d: ", round);
		for (i = 0; i < len; i++){
			all[s[i]]++;
		}
		for (i = 0; i <= 129; i++){
			if (all[i] >= 2){
				count[i] = 1;
				for (j = 2; j <= sqrtl(all[i]); j++){
					if (all[i] % j == 0){
						count[i] = 0;
					}
				}
			}
		}
		for (i = 0; i <= 129; i++){
			if (count[i]){
				zero = 1;
				printf("%c", i);
			}
		}	
		if (zero == 0){
			printf("empty");
		}
		printf("\n");
		round++;
	}
	return 0;
}
