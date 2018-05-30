#include<stdio.h>
#include<string.h>
int len[1005], temp[1005];
char all[1009];
int main()
{
	int length = 0, i1;
	while (gets(all)){
		int i, j = 0;
		for (i1 = 0; i1 <= 1001; i1++){
			len[i1] = 1;
		}
		length = strlen(all);
		for (i = 0; i < length; i++){
			if (all[i] == all[i + 1]){
				len[j]++;
				temp[j] = all[i];
			}
			else if (all[i] != all[i + 1] && len[j]==1){
				temp[j] = all[i];
				j++;
			}
			else if (all[i] != all[i + 1]){
				j++;
				temp[j] = all[i + 1];
			}
		}
		for (i = 0; i < j; i++){
			if (len[i] == 1){
				printf("%c", temp[i]);
			}
			else if (len[i] == 2){
				printf("%c%c", temp[i], temp[i]);
			}
			else{
				printf("%d%c", len[i], temp[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
