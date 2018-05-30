#include<stdio.h>
#include<string.h>
char all[100][1000] = { 0 };
int main()
{
	int i = 0, count[100] = { 0 }, max = 0, j = 0, k = 0;
	while (gets(all[i])){
		if (strcmp(all[i], "END") == 0)
			break;
		count[i] = strlen(all[i]);
		if (count[i] > max){
			max = count[i];
		}
		i++;
	}
	for (j = 0; j < max; j++){
		for (k = 0; k < i; k++){
			if (count[k] <= j){
				printf("   ");
			}
			else {
				printf("%c  ", all[k][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
