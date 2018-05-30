#include<stdio.h>
#include<string.h>
int main()
{
	int some;
	while (scanf("%d\n", &some) != EOF){
		int i, count[200] = { 0 }, max = 0, temp = 0;
		char s[1000];
		for (i = 0; i < some; i++){
			int len = 0, j = 0;
			gets(s);
			len = strlen(s);
			for (j = 0; j < len; j++){
				if (s[j] >= 97 && s[j] <= 122){
					count[s[j] - 32]++;
				}
				else if (s[j] >= 65 && s[j] <= 90){
					count[s[j]]++;
				}
			}
		}
		for (i = 65; i <= 90; i++){
			if (count[i]>max){
				max = count[i];
			}
		}
		for (i = max; i >= 1; i--){
			for (temp = 65; temp <= 90; temp++){
				if (count[temp] == i){
					printf("%c %d\n", temp, i);
				}
			}
		}
	}
	return 0;
}
