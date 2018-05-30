#include<stdio.h>
#include<string.h>
int main()
{
	char a[10020] = {0};
	while (scanf("%s", a)==1){
		int count, length, sum = 0, first;
		if (a[0] == '-'){
			first = 1;
		}
		else{
			first = 0;
		}
		length = strlen(a);
		for (count = first; count < length; count++){
			sum += a[count] - '0';
		}
		if (sum % 3 == 0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}
