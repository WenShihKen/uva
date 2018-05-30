#include<stdio.h>
#include<string.h>
char in1[10000];
int main()
{
	while (gets(in1)){
		int i, len = strlen(in1), d = 0, t;
		for (i = 2; i < len; i++){
			if (in1[i] == '('){
				d++;
			}
			else if (in1[i] == ')'){
				d--;
			}
			if (d == 0){
				break;
			}
		}
		t = i;
		for (i = t + 2; i < len - 1; i++){
			printf("%c", in1[i]);
		}
		printf(" ");
		for (i = 0; i <= t; i++){
			printf("%c", in1[i]);
		}
		printf(";\n");
	}
	return 0;
}
