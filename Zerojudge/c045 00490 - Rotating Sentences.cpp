#include<stdio.h>
#include<string.h>
char in1[102][102];
int temp[102];
int main()
{
	int i = 0, max = 0, j, k;
	for (j = 0; j < 101; j++){
		temp[j] = 0;
	}
	while (gets(in1[i])){
		int len = strlen(in1[i]);
		if (max < len){
			max = len;
		}
		temp[i] = len;
		i++;
	}
	for (j = 0; j < max; j++){
		for (k = i - 1; k >= 0; k--){
			if (j >= temp[k]){
				printf(" ");
			}
			else{
				printf("%c", in1[k][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
