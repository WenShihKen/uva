#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int many, sum = 0, temp = 0;
		char s[3], a;
		scanf("%d", &many);
		while (many--){
			scanf("%s", s);
			if (s[0] - 97 < 0){
				temp = s[0] - 48;
				if (s[1] - 48 >= 0){
					temp *= 10;
					temp += (s[1] - 48);
				}
				switch (temp){
				case 1:a = 'm'; break;
				case 2:a = 'j'; break;
				case 3:a = 'q'; break;
				case 4:a = 'h'; break;
				case 5:a = 'o'; break;
				case 6:a = 'f'; break;
				case 7:a = 'a'; break;
				case 8:a = 'w'; break;
				case 9:a = 'c'; break;
				case 10:a = 'p'; break;
				case 11:a = 'n'; break;
				case 12:a = 's'; break;
				case 13:a = 'e'; break;
				case 14:a = 'x'; break;
				case 15:a = 'd'; break;
				case 16:a = 'k'; break;
				case 17:a = 'v'; break;
				case 18:a = 'g'; break;
				case 19:a = 't'; break;
				case 20:a = 'z'; break;
				case 21:a = 'b'; break;
				case 22:a = 'l'; break;
				case 23:a = 'r'; break;
				case 24:a = 'y'; break;
				case 25:a = 'u'; break;
				case 26:a = 'i'; break;
				}
				printf("%c", a);
			}
			else{
				switch (s[0]){
				case 'u':temp = 1; break;
				case 'z':temp = 2; break;
				case 'r':temp = 3; break;
				case 'm':temp = 4; break;
				case 'a':temp = 5; break;
				case 't':temp = 6; break;
				case 'i':temp = 7; break;
				case 'f':temp = 8; break;
				case 'x':temp = 9; break;
				case 'o':temp = 10; break;
				case 'p':temp = 11; break;
				case 'n':temp = 12; break;
				case 'h':temp = 13; break;
				case 'w':temp = 14; break;
				case 'v':temp = 15; break;
				case 'b':temp = 16; break;
				case 's':temp = 17; break;
				case 'l':temp = 18; break;
				case 'e':temp = 19; break;
				case 'k':temp = 20; break;
				case 'y':temp = 21; break;
				case 'c':temp = 22; break;
				case 'q':temp = 23; break;
				case 'j':temp = 24; break;
				case 'g':temp = 25; break;
				case 'd':temp = 26; break;
				}
				sum += temp;
				temp = 0;
			}
		}
		if (sum != 0){
			printf("%d\n", sum);
		}
		printf("\n");
	}
	return 0;
}
