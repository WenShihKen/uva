#include<stdio.h>
#include<string.h>
int main()
{
	char s[1005];
	while (gets(s)){
		int len, i, all[133] = { 0 }, max = 0, j;
		len = strlen(s);
		for (i = 0; i < len; i++){
			all[s[i]]++;
		}
		for (i = 0; i <= 129; i++){
			if (all[i]>max){
				max = all[i];
			}
		}
		for (i = 1; i <= max; i++){
			for (j = 129; j >= 0; j--){
				if (all[j] == i){
					printf("%d %d\n", j, i);
				}
			}
		}
	}
	return 0;
}
