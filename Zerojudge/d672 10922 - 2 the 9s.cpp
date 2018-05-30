#include<stdio.h>
#include<string.h>
char s[10000];
int t[10000];
int main()
{
	while (gets(s)){
		int len, i, sum = 0, time = 1, temp = 0;
		len = strlen(s);
		if (len == 1 && s[0] == '0')
			break;
		for (i = 0; i < len; i++){
			if (s[i] >= 48 && s[i] <= 57){
				sum += s[i] - 48;
			}
			t[i] = s[i] - 48;
		}
		if (sum % 9 != 0){
			for (i = 0; i < len; i++){
				printf("%d", t[i]);
			}
			printf(" is not a multiple of 9.\n");
		}
		else{
			while (1){
				if (sum == 9){
					break;
				}
				while (sum != 0){
					temp += sum % 10;
					sum /= 10;
				}
				sum = temp;
				temp = 0;
				time++;
			}
			for (i = 0; i < len; i++){
				printf("%d", t[i]);
			}
			printf(" is a multiple of 9 and has 9-degree %d.\n", time);
		}
	}
	return 0;
}
