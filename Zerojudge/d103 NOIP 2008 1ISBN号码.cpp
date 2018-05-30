#include<stdio.h>
#include<string.h>
char s[100];
int temp[100];
int main()
{
	while (scanf("%s",s)!=EOF){
		int len = 0, i, j = 0;
		len = strlen(s);
		for (i = 0; i < len; i++){
			if (s[i] >= 48 && s[i] <= 57){
				temp[j] = s[i] - 48;
				j++;
			}
			if (j > 8){
				break;
			}
		}
		int count = 1, sum = 0;
		for (i = 0; i < j; i++){
			sum += (temp[i] * count);
			count += 1;
		}
		sum %= 11;
		if (sum == s[len - 1] - 48){
			printf("Right\n");
		}
		else if (sum == 10 && s[len - 1] == 'X'){
			printf("Right\n");
		}
		else if (sum != s[len - 1] - 48){
			if (sum == 10){
				for (i = 0; i < len - 1; i++){
					printf("%c", s[i]);
				}
				printf("X\n");
			}
			else{
				for (i = 0; i < len - 1; i++){
					printf("%c", s[i]);
				}
				printf("%d\n", sum);
			}
		}
	}
	return 0;
}
