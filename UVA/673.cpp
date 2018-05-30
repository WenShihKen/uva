#include<stdio.h>
#include<string.h>
int main()
{
	int time;
	scanf("%d\n", &time);
	while (time--){
		char in1[200], temp[200];
		int count = 0, check = 1, i, len;
		gets(in1);
		len = strlen(in1);
		for (i = 0; i < len; i++){
			if (in1[i] == '('){
				temp[count++] = '(';
			}
			else if (in1[i] == ')'){
				if (temp[count - 1] == '('){
					count--;
				}
				else{
					check = 0;
				}
			}
			else if (in1[i] == '['){
				temp[count++] = '[';
			}
			else{
				if (temp[count - 1] == '['){
					count--;
				}
				else{
					check = 0;
				}
			}
			if (check == 0){
				break;
			}
		}
		if (check == 1 && count == 0){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
