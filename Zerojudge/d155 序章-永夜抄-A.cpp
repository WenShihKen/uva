#include<stdio.h>
#include<string.h>
char in1[50];
int main()
{
	int out1 = 0, out2 = 0;		/*1為前 2為後*/
	while (gets(in1)){
		if (strcmp(in1, "Game Over") == 0){
			if (out1 > out2){
				printf("螢火的蹤跡\n");
			}
			else{
				printf("悲慘的籌措起香油錢\n");
			}
			break;
		}
		int i, len = strlen(in1), j;
		for (i = 0; i < len; i++){
			if (in1[i] == ' ')
				break;
		}
		j = len - 1 - i;
		if (i == 5){
			if (in1[0] == 'P'){
				if (j == 5){
					out1++;
					printf("紫獲勝\n");
				}
				else{
					out2++;
					printf("靈夢獲勝\n");
				}
			}
			else{
				if (j == 5){
					out2++;
					printf("靈夢獲勝\n");
				}
				else{
					out1++;
					printf("紫獲勝\n");
				}
			}
		}
		else{
			if (in1[i + 1] == 'S'){
				out2++;
				printf("靈夢獲勝\n");
			}
			else{
				out1++;
				printf("紫獲勝\n");
			}
		}
	}
	return 0;
}
