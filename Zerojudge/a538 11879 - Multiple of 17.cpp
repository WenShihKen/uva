#include<stdio.h>
#include<string.h>
int main()
{
	char in1[110];
	while (gets(in1)){
		int i;
		if (in1[0] == '0')
			break;
		int check = 0, len = strlen(in1);
		for (i = 0; i < len; i++){
			check = check * 10 + (in1[i] - 48);
			check %= 17;
		}
		if (check){
			printf("0\n");
		}
		else{
			printf("1\n");
		}
	}
	return 0;
}
