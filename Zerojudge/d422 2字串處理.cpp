#include<stdio.h>
#include<string.h>
char in1[500];
int main()
{
	while (gets(in1)){
		int i, len, t = 0, sum = 0, temp[300] = { 0 }, j = 0;
		len = strlen(in1);
		for (i = 0; i < len; i++){
			if (in1[i] >= 48 && in1[i] <= 57){
				temp[j] = in1[i] - 48;
				j++;
			}
			else{
				j++;
			}
		}
		int now = 0, k = 0, m = 0;
		for (i = 0; i < len; i++){
			if (in1[i] >= 65 && in1[i] <= 90){
				for (k = now; k < i; k++){
					for (m = 1; m <= temp[k]; m++){
						printf("%c", in1[i]);
					}
				}
				now = i;
			}
			else if (in1[i] == 'b'){
				for (k = now; k < i; k++){
					for (m = 1; m <= temp[k]; m++){
						printf(" ");
					}
				}
				now = i;
			}
			else if (in1[i] == '*'){
				for (k = now; k < i; k++){
					for (m = 1; m <= temp[k]; m++){
						printf("*");
					}
				}
				now = i;
			}
			else if (in1[i] == '!'){
				printf("\n");
				now = i;
			}
		}
		printf("\n");
	}
	return 0;
}
