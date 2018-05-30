#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	while (gets(s)){
		int len, i, sum = 0, c = 0;
		if (s[0] == '0'&&s[1] == '\0'){
			break;
		}
		len = strlen(s);
		for (i = 0; i < len; i++){
			if (s[i] >= 65 && s[i] <= 90){
				sum += s[i] - 64;
			}
			else if (s[i] >= 97 && s[i] <= 122){
				sum += s[i] - 96;
			}
			else{
				c = 1; break;
			}
		}
		if (c == 0){
			printf("%d\n", sum);
		}
		else if (c == 1){
			printf("Fail\n");
		}
	}
	return 0;
}
