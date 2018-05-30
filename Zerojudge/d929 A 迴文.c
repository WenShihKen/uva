#include<stdio.h>
#include<string.h>
char in1[105];
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		gets(in1);
		int i, len, check = 1, j;
		len = strlen(in1);
		if (len % 2){
			for (i = len / 2 - 1, j = len / 2 + 1; i >= 0, j < len; i--, j++){
				if (in1[i] != in1[j]){
					check = 0;
					break;
				}
			}
		}
		else{
			for (i = len / 2 - 1, j = len / 2; i >= 0, j < len; i--, j++){
				if (in1[i] != in1[j]){
					check = 0;
					break;
				}
			}
		}
		if (check){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}
