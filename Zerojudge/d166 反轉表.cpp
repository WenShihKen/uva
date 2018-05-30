#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[5000];
	while (gets(s)){
		int num[56] = { 0 }, temp[5] = { 0 }, ans[56] = { 0 };
		if (s[0] == '-'&&s[1] == '1')
			break;
		int len, i, time = 0, num1 = 0, many = 0, now = 1, j = 0;
		len = strlen(s);
		for (i = 0; i <= 54; i++){
			ans[i] = 0;
		}
		int t = 0;
		for (i = 0; i <= len; i++){
			if (s[i] >= 48 && s[i] <= 57){
				temp[t] = s[i] - 48;
				t++;
				time++;
			}
			else if (s[i] == ' ' || s[i] == '\0'){
				if (time == 2){
					num1 = temp[0]*10 + temp[1];
				}
				else if (time == 1){
					num1 = temp[0];
				}
				num[many] = num1;
				many++;
				num1 = 0;
				time = 0;
				t = 0;
			}
		}
		for (i = 0; i < many; i++){
			time = 0;
			for (j = 0; j < 54; j++){
				if (time == num[i] && ans[j] == 0){
					ans[j] = now;
					now += 1;
					break;
				}
				else if (ans[j] == 0){
					time++;
				}

			}
		}
		for (i = 0; i < many; i++){
			printf("%d ", ans[i]);
		}
		printf("\n");
	}
	return 0;
}
