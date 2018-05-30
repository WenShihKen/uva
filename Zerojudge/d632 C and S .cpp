#include<stdio.h>
#include<string.h>
int main()
{
	char in1[35], in2[35];
	while (gets(in1)){
		gets(in2);
		int sum[35] = { 0 }, i;
		for (i = 0; i <= 31; i++){
			printf("%c", in1[i]);
		}
		printf("\n");
		for (i = 0; i <= 31; i++){
			printf("%c", in2[i]);
		}
		printf("\n");
		printf("---------------------------------\n");
		for (i = 31; i >= 0; i--){
			sum[i] += in1[i] + in2[i] - 96;
			if (sum[i] >= 2){
				sum[i - 1] += sum[i] / 2;
				sum[i] %= 2;
			}
		}
		for (i = 0; i <= 31; i++){
			printf("%d", sum[i]);
		}
		printf("\n");
		printf("****End of Data******************\n");
	}
	return 0;
}
