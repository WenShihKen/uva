#include<stdio.h>
#include<string.h>
#define max 2147483647
int main()
{
	char in1[10000];
	while (gets(in1)){
		long double a1 = 0.0, a2 = 0.0;
		int i, len = strlen(in1);
		for (i = 0; in1[i] != ' ';i++){
			a1 = a1*10.0 + in1[i] - 48;
		}
		for (i = i + 3; i < len; i++){
			a2 = a2*10.0 + in1[i] - 48;
		}
		for (i = 0; i < len; i++){
			printf("%c", in1[i]);
		}
		printf("\n");
		for (i = 0; in1[i] != '*' && in1[i] != '+'; i++){
		}
		if (a1 > max){
			printf("first number too big\n");
		}
		if (a2 > max){
			printf("second number too big\n");
		}
		if (in1[i] == '*'){
			if (a1*a2 > max){
				printf("result too big\n");
			}
		}
		else{
			if (a1+a2 > max){
				printf("result too big\n");
			}
		}
	}
	return 0;
}
