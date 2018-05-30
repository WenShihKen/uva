#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	while (gets(s)){
		int word = 0, another = 0, len = 0, small = 0, big = 0, strength = 0;
		int i;
		len = strlen(s);
		if (len >= 8){
			strength++;
		}
		for (i = 0; i < len; i++){
			if (s[i] >= 65 && s[i] <= 90){
				big += 1;
			}
			else if (s[i] >= 97 && s[i] <= 122){
				small += 1;
			}
			else{
				another = 1;
			}
		}
		if (small>0 && big > 0){
			strength++;
		}
		if (small + big >= 2 && another > 0){
			strength++;
		}
		if (strength == 0){
			printf("This password is WEAK\n");
		}
		else if (strength == 1){
			printf("This password is ACCEPTABLE\n");
		}
		else if (strength == 2){
			printf("This password is GOOD\n");
		}
		else if (strength == 3){
			printf("This password is STRONG\n");
		}
	}
	return 0;
}
