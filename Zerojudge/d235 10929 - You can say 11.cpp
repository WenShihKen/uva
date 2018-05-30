#include<stdio.h>
#include<string.h>
int main()
{
	char in[1005];
	while (gets(in)){
		if (in[0] == '0'&&in[1] == '\0'){
			break;
		}
		int a, i, j, sum1 = 0, sum2 = 0;
		a = strlen(in);
		for (i = 0; i < a; i += 2){
			sum1 += (in[i] - 48);
		}
		for (j = 1; j < a; j += 2){
			sum2 += (in[j] - 48);
		}
		if (sum1 - sum2 == 0 || (sum1 - sum2) % 11 == 0){
			printf("%s is a multiple of 11.\n", in);
		}
		else{
			printf("%s is not a multiple of 11.\n",in);
		}
	}
	return 0;
}
