#include<stdio.h>
#include<string.h>
char in1[100000];
char change[100000];
int main()
{
	while (gets(in1)){
		int len1;
		len1 = strlen(in1);
		int i, j = 0, k;
		for (i = 0; i < len1; i++){
			if ((in1[i] >= 65 && in1[i] <= 90)){
				change[j] = in1[i] + 32;
				j++;
			}
			else if ((in1[i] >= 97 && in1[i] <= 122)){
				change[j] = in1[i];
				j++;
			}
			else if ((in1[i] >=48 && in1[i] <= 57)){
				change[j] = in1[i];
				j++;
			}
			else{
				continue;
			}
		}
		int check = 1;
		if (j % 2){
			for (i = 0, k = j - 1; i<j / 2, k>j / 2; i++, k--){
				if (change[i] != change[k]){
					check = 0;
					break;
				}
			}
		}
		else{
			for (i = 0, k = j - 1; i < j / 2, k >= j / 2; i++, k--){
				if (change[i] != change[k]){
					check = 0;
					break;
				}
			}
		}
		for (i = 0; i < len1; i++){
			printf("%c", in1[i]);
		}
		printf("\n");
		if (check){
			printf("-- is a palindrome\n");
		}
		else{
			printf("-- is not a palindrome\n");
		}
	}
	return 0;
}
