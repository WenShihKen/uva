#include<stdio.h>
#include<string.h>
#include<math.h>
char in1[10009];
int main()
{
	while (gets(in1)){
		int all[10006] = { 0 }, a[3] = { 0 };
		int len = strlen(in1), i, count = 0, j, temp = 0;
		for (i = 0; i < len; i++){
			if (in1[i] == ' '){
				break;
			}
			else{
				all[i] = in1[i] - 48;
			}
		}
		a[0] = in1[i + 1] - 48;
		count = powl(2, a[0]);
		for (j = 0; j < i; j++){
			temp = (temp * 10 + all[j]);
			temp %= count;
		}
		if (temp){
			printf("可惡!!算了這麼久");
			for (j = 0; j < i; j++){
				printf("%d", all[j]);
			}
			printf("竟然無法被2的%d次整除\n", a[0]);
		}
		else{
			printf("YA!!終於算出");
			for (j = 0; j < i; j++){
				printf("%d", all[j]);
			}
			printf("可被2的%d次整除了!!\n", a[0]);
		}
	}
	return 0;
}
