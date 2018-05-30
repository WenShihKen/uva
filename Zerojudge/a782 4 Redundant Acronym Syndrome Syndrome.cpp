#include<stdio.h>
#include<string.h>
int main()
{
	char in1[100];
	while (gets(in1)){
		if (in1[0] == 'E'&&in1[1] == 'N'&&in1[2] == 'D')
			break;
		int i, len = strlen(in1), space = 1, first = 1, last = 0;
		for (i = 0; i < len; i++){
			if (in1[i] == ' '){
				space++;
				first = 1;
				if (i >= last){
					last = i;
				}
			}
			else if (first == 1 && in1[i]){
				printf("%c", in1[i] - 32);
				first = 0;
			}
		}
		printf(" ");
		for (i = last + 1; i < len; i++){
			printf("%c", in1[i]);
		}
		printf("\n");
	}
	return 0;
}
