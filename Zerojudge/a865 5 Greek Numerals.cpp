#include<stdio.h>
#include<string.h>
int main()
{
	char s[10000];
	while (gets(s)){
		if (s[0] == '.'){
			break;
		}
		int len, i, sum = 0, temp = 0;
		len = strlen(s);
		for (i = 0; i < len; i++){
			temp = 0;
			switch (s[i]){
			case 'A':temp = 1; break;
			case 'B':temp = 2; break;
			case 'G':temp = 3; break;
			case 'D':temp = 4; break;
			case 'E':temp = 5; break;
			case '#':temp = 6; break;
			case 'Z':temp = 7; break;
			case 'Y':temp = 8; break;
			case 'H':temp = 9; break;
			case 'I':temp = 10; break;
			case 'K':temp = 20; break;
			case 'L':temp = 30; break;
			case 'M':temp = 40; break;
			case 'N':temp = 50; break;
			case 'X':temp = 60; break;
			case 'O':temp = 70; break;
			case 'P':temp = 80; break;
			case 'Q':temp = 90; break;
			case 'R':temp = 100; break;
			case 'S':temp = 200; break;
			case 'T':temp = 300; break;
			case 'U':temp = 400; break;
			case 'F':temp = 500; break;
			case 'C':temp = 600; break;
			case '$':temp = 700; break;
			case 'W':temp = 800; break;
			case '3':temp = 900; break;
			}
			sum += temp;
		}
		printf("%d\n", sum);
	}
	return 0;
}
