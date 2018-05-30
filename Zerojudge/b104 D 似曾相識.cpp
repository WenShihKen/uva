#include<stdio.h>
#include<string.h>
int main()
{
	int time;
	scanf("%d\n", &time);
	while (time--){
		char in1[1005], in2[1005];
		int len1, len2, i, temp[130] = { 0 }, ans = 1;
		gets(in1);
		gets(in2);
		len1 = strlen(in1);
		len2 = strlen(in2);
		for (i = 0; i < len1; i++){
			temp[in1[i]]++;
		}
		for (i = 0; i < len2; i++){
			temp[in2[i]]--;
		}
		for (i = 0; i < 129; i++){
			if (temp[i]){
				ans = 0;
			}
		}
		if (ans){
			printf("possible\n");
		}
		else{
			printf("impossible\n");
		}
	}
	return 0;
}
