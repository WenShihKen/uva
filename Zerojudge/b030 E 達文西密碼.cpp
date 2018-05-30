#include<stdio.h>
#include<string.h>
char in1[1200], in2[1200];
int c1[150] = { 0 };
int main()
{
	while (gets(in1)){
		gets(in2);
		int len1, len2, i, check = 1;
		for (i = 0; i < 135; i++){
			c1[i] = 0;
		}
		len1 = strlen(in1);
		len2 = strlen(in2);
		for (i = 0; i < len1; i++){
			if (in1[i] != ' ')
				c1[in1[i]]++;
		}
		for (i = 0; i < len2; i++){
			if (in2[i] != ' ')
				c1[in2[i]]--;
		}
		for (i = 0; i <= 127; i++){
			if (c1[i] != 0){
				check = 0;
				break;
			}
		}
		if (check){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
