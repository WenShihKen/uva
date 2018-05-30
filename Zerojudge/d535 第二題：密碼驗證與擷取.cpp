#include<stdio.h>
#include<string.h>
int main()
{
	char pass[50];
	while (gets(pass)){
		int count1 = 0, i, j, len, temp1, temp2, count2 = 0;
		len = strlen(pass);
		if (len >= 10 && len <= 30){
			count1++;
		}
		if (len % 2 == 0){
			temp1 = len / 2;
			temp2 = (len / 2) - 1;
			for (i = temp1, j = temp2; i < len, j >= 0; i++, j--){
				if (pass[i] == pass[j]){
					count2++;
				}
			}
			if (count2 == len / 2){
				count1++;
			}
		}
		else{
			temp1 = len / 2 + 1;
			temp2 = (len / 2) - 1;
			for (i = temp1, j = temp2; i < len, j >= 0; i++, j--){
				if (pass[i] == pass[j]){
					count2++;
				}
			}
			if (count2 == len / 2){
				count1++;
			}
		}
		count2 = 0;
		for (i = 1; i < len; i++){
			if ((pass[i] - 48) <= (pass[i - 1] - 48) * 2){
				count2++;
			}
		}
		if (count2 == len - 1){
			count1++;
		}
		j = 0; count2 = 0;
		if (count1 == 3){
			for (i = 0; i < len; i++){
				if ((pass[i] - 48) % 2 == 0){
					count2++;
					printf("%c", pass[i]);
				}
			}
			if (count2){
				printf("\n");
			}
			else{
				printf("0\n");
			}
		}
		else{
			printf("INCORRECT\n");
		}
	}
	return 0;
}
