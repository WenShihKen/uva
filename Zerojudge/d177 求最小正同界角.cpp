#include<stdio.h>
#include<string.h>
char in1[1000];
int all[1000] = { 0 };
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		gets(in1);
		int i, len = strlen(in1);
		for (i = 0; i < len; i++){
			all[i] = in1[i] - 48;
		}
		int temp = 0;
		for (i = 0; i < len; i++){
			temp = temp * 10 + in1[i] - 48;
			temp %= 360;
		}
		printf("%d\n", temp);
	}
	return 0;
}
