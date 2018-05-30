#include<stdio.h>
int main()
{
	char string[100];
	int firstword;
	int a, a1, b, c, sum;
	while (scanf("%s", string) != EOF){
		switch (string[0]){
		case 'A':
			firstword = 10;
			break;
		case 'B':
			firstword = 11;
			break;
		case 'C':
			firstword = 12;
			break;
		case 'D':
			firstword = 13;
			break;
		case 'E':
			firstword = 14;
			break;
		case 'F':
			firstword = 15;
			break;
		case 'G':
			firstword = 16;
			break;
		case 'H':
			firstword = 17;
			break;
		case 'I':
			firstword = 34;
			break;
		case 'J':
			firstword = 18;
			break;
		case 'K':
			firstword = 19;
			break;
		case 'L':
			firstword = 20;
			break;
		case 'M':
			firstword = 21;
			break;
		case 'N':
			firstword = 22;
			break;
		case 'O':
			firstword = 35;
			break;
		case 'P':
			firstword = 23;
			break;
		case 'Q':
			firstword = 24;
			break;
		case 'R':
			firstword = 25;
			break;
		case 'S':
			firstword = 26;
			break;
		case 'T':
			firstword = 27;
			break;
		case 'U':
			firstword = 28;
			break;
		case 'V':
			firstword = 29;
			break;
		case 'W':
			firstword = 32;
			break;
		case 'X':
			firstword = 30;
			break;
		case 'Y':
			firstword = 31;
			break;
		case 'Z':
			firstword = 33;
			break;
		}
		a = firstword / 10; b = firstword % 10;  //a為商  b為餘數
		a1 = a + (9 * b);
		c = (string[1]-48) * 8 + (string[2]-48) * 7 + (string[3]-48) * 6 + (string[4]-48) * 5 + (string[5]-48) * 4 + (string[6] -48)* 3+ (string[7] -48)* 2 + (string[8]-48) * 1 + (string[9]-48);
		sum = a1 + c; 
		if (sum % 10 == 0){
			printf("real\n");
		}
		else{
			printf("fake\n");
		}
	}
	return 0;
}
