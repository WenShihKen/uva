#include<stdio.h>
#include<string.h>
char in1[10000];
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		gets(in1);
		int len = strlen(in1), i, temp = 0;
		for (i = 0; i < len; i++){
			temp = temp * 2 + in1[i] - 48;
			temp %= 3;
		}
		if (temp == 0){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
