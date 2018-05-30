#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100];
	while (gets(s)){
		int len, sum = 0, i, count = 0;
		double temp;
		len = strlen(s);
		for (i = 0; i < len; i++){
			if (s[i] >= 65 && s[i] <= 90){
				sum += s[i] - 38;
			}
			else if (s[i] >= 97 && s[i] <= 122){
				sum += s[i] - 96;
			}
		}
		temp = sum;
		for (i = 2; i <= sqrt(temp); i++){
			if (sum%i == 0){
				count = 1;
				break;
			}
		}
		if (count){
			printf("It is not a prime word.\n");
		}
		else{
			printf("It is a prime word.\n");
		}
	}
	return 0;
}
