#include<stdio.h>
#include<string.h>
int main()
{
	int time, count = 1;
	scanf("%d\n", &time);
	while (time--){
		char s[500];
		int i, len, touch = 0;
		gets(s);
		len = strlen(s);
		for (i = 0; i < len; i++){
			int temp = 0;
			switch (s[i]){
			case 'a':temp = 1; break;
			case 'd':temp = 1; break;
			case 'g':temp = 1; break;
			case 'j':temp = 1; break;
			case 'm':temp = 1; break;
			case 'p':temp = 1; break;
			case 't':temp = 1; break;
			case 'w':temp = 1; break;
			case ' ':temp = 1; break;
			case 'b':temp = 2; break;
			case 'e':temp = 2; break;
			case 'h':temp = 2; break;
			case 'k':temp = 2; break;
			case 'n':temp = 2; break;
			case 'q':temp = 2; break;
			case 'u':temp = 2; break;
			case 'x':temp = 2; break;
			case 'c':temp = 3; break;
			case 'f':temp = 3; break;
			case 'i':temp = 3; break;
			case 'l':temp = 3; break;
			case 'o':temp = 3; break;
			case 'r':temp = 3; break;
			case 'v':temp = 3; break;
			case 'y':temp = 3; break;
			case 's':temp = 4; break;
			case 'z':temp = 4; break;
			}
			touch += temp;
		}
		printf("Case #%d: %d\n", count, touch);
		count++;
	}
	return 0;
}
