#include<stdio.h>
#include<string.h>
char in1[1000], in2[1000];
int main()
{
	while (gets(in1) && strcmp(in1, "0")){
		int ans, temp = 0, len1 = strlen(in1);
		ans = in1[len1 - 1] - 48;
		while (gets(in2) && strcmp(in2, "0")){
			int len2 = strlen(in2);
			temp += ((in2[len2 - 1] - 48) % 10);
		}
		temp %= 10;
		if (temp == ans){
			if (ans % 2 == 1){
				printf("2\n");
			}
			else if (ans % 2 == 0){
				printf("1\n");
			}
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}
