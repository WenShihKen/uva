#include<stdio.h>
#include<string.h>
int main()
{
	char in1[200];
	int sum[200] = { 0 }, j;
	int time = 1;
	for (j = 0; j <= 200; j++){
		sum[j] = 0;
	}
	while (1){
		gets(in1);
		int len1, i;
		len1 = strlen(in1);
		if (len1 == 1 && in1[0] == '0'){
			for (i = 200; sum[i] == 0; i--){
			}
			for (; i >= 0;i--){
				printf("%d", sum[i]);
			}
			printf("\n");
			break;
		}
		for (i = len1 - 1, j = 0; i >= 0; i--, j++){/*反過來算*/
			sum[j] += in1[i] - 48;
			if (sum[j] >= 10){
				sum[j + 1] += sum[j] / 10;
				sum[j] %= 10;
			}
		}
	}
	return 0;
}
