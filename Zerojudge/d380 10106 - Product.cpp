#include<stdio.h>
#include<string.h>
int main()
{
	char in1[300], in2[300];
	while (gets(in1)){
		gets(in2);
		int len1, len2, temp1[300] = { 0 }, temp2[300] = { 0 }, sum[800] = { 0 }, i, j;
		len1 = strlen(in1);
		len2 = strlen(in2);
		if (len1 == 1 && in1[len1 - 1] - 48 == 0 || len2 == 1 && in2[len2 - 1] - 48 == 0){
			printf("0\n");
		}
		else{
			for (i = 0; i < len1; i++){
				temp1[i] = in1[i] - 48;
			}
			for (i = 0; i < len2; i++){
				temp2[i] = in2[i] - 48;
			}
			for (i = len1 - 1; i >= 0; i--){
				for (j = len2 - 1; j >= 0; j--){
					sum[i + j] += temp1[i] * temp2[j];
				}
			}
			for (i = (len1 - 1) + (len2 - 1); i > 0; i--){
				if (sum[i] >= 10){
					sum[i - 1] += sum[i] / 10;
					sum[i] %= 10;
				}
			}
			i = 0;
			int check = 0;
			for (i = 0; sum[i] == 0; i++){
			}
			for (check = i; check <= (len1 - 1) + (len2 - 1); check++){
				printf("%d", sum[check]);
			}
			printf("\n");
		}
	}
	return 0;
}
