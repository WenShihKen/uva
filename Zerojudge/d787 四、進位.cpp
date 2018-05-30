#include<stdio.h>
#include<string.h>
int main()
{
	int time;
	scanf("%d\n", &time);
	while (time--){
		char s[500];
		int in1[3][150] = { 0 }, max = 0;
		int len1[3] = { 0 }, sum[150];
		int len, i, count1 = 0, count2 = 0, carry = 0, all = 0;
		gets(s);
		len = strlen(s);
		for (i = len - 1; i >= 0; i--){
			if (s[i] >= 48 && s[i] <= 57){
				in1[count1][count2] = s[i] - 48;
				len1[count1]++;
				count2++;
			}
			if (s[i] == ' '){
				count1++;
				count2 = 0;
			}
		}
		if (len1[0] > len1[1]){
			max = len1[0];
		}
		else{
			max = len1[1];
		}
		for (i = 0; i < max; i++){
			sum[i] = in1[0][i] + in1[1][i] + carry;
			if (sum[i] >= 10){
				carry = 1;
				all++;
			}
		}
		printf("%d\n", all);
	}
	return 0;
}
