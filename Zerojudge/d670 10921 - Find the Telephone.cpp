#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	while (gets(a)){
		int len, count;
		len = strlen(a);
		for (count = 0; count < len; count++){
			if (a[count] == 'A' || a[count] == 'B' || a[count] == 'C'){
				a[count] ='2';
			}
			else if (a[count] == 'D' || a[count] == 'E' || a[count] == 'F'){
				a[count] = '3';
			}
			else if (a[count] == 'G' || a[count] == 'H' || a[count] == 'I'){
				a[count] = '4';
			}
			else if (a[count] == 'J' || a[count] == 'K' || a[count] == 'L'){
				a[count] = '5';
			}
			else if (a[count] == 'M' || a[count] == 'N' || a[count] == 'O'){
				a[count] = '6';
			}
			else if (a[count] == 'P' || a[count] == 'Q' || a[count] == 'R' || a[count] == 'S'){
				a[count] = '7';
			}
			else if (a[count] == 'T' || a[count] == 'U' || a[count] == 'V'){
				a[count] = '8';
			}
			else if (a[count] == 'W' || a[count] == 'X' || a[count] == 'Y' || a[count] == 'Z'){
				a[count] = '9';
			}
		}
		printf("%s\n", a);
	}
	return 0;
}
