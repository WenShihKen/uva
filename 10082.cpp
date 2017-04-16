#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	while (gets(s)) {
		int len, i;
		len = strlen(s);
		for (i = 0; i < len; i++) {
			switch (s[i]) {
			case '1':s[i] = '`'; break;
			case '2':s[i] = '1'; break;
			case '3':s[i] = '2'; break;
			case '4':s[i] = '3'; break;
			case '5':s[i] = '4'; break;
			case '6':s[i] = '5'; break;
			case '7':s[i] = '6'; break;
			case '8':s[i] = '7'; break;
			case '9':s[i] = '8'; break;
			case '0':s[i] = '9'; break;
			case '-':s[i] = '0'; break;
			case '=':s[i] = '-'; break;
			case 'W':s[i] = 'Q'; break;
			case 'E':s[i] = 'W'; break;
			case 'R':s[i] = 'E'; break;
			case 'T':s[i] = 'R'; break;
			case 'Y':s[i] = 'T'; break;
			case 'U':s[i] = 'Y'; break;
			case 'I':s[i] = 'U'; break;
			case 'O':s[i] = 'I'; break;
			case 'P':s[i] = 'O'; break;
			case '[':s[i] = 'P'; break;
			case ']':s[i] = '['; break;
			case '\\':s[i] = ']'; break;
			case 'S':s[i] = 'A'; break;
			case 'D':s[i] = 'S'; break;
			case 'F':s[i] = 'D'; break;
			case 'G':s[i] = 'F'; break;
			case 'H':s[i] = 'G'; break;
			case 'J':s[i] = 'H'; break;
			case 'K':s[i] = 'J'; break;
			case 'L':s[i] = 'K'; break;
			case ';':s[i] = 'L'; break;
			case '\'':s[i] = ';'; break;
			case 'X':s[i] = 'Z'; break;
			case 'C':s[i] = 'X'; break;
			case 'V':s[i] = 'C'; break;
			case 'B':s[i] = 'V'; break;
			case 'N':s[i] = 'B'; break;
			case 'M':s[i] = 'N'; break;
			case ',':s[i] = 'M'; break;
			case '.':s[i] = ','; break;
			case '/':s[i] = '.'; break;
			}
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
