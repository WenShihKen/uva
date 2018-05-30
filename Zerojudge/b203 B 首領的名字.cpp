#include<stdio.h>
#include<string.h>
int main()
{
	int t, round = 1;
	scanf("%d\n", &t);
	while (t--){
		printf("DATA SET #%d:\n", round++);
		int i, guess, len1;
		char in1[150];
		gets(in1);
		len1 = strlen(in1);
		for (i = 0; i < len1; i++){
			if (in1[i] == '#'){
				guess = i;
			}
		}
		int time;
		scanf("%d\n", &time);
		for (i = 0; i < time; i++){
			char in2[150];
			int j, check = 1, len2;
			gets(in2);
			len2 = strlen(in2);
			for (j = 0; j < guess; j++){
				if (in1[j] != in2[j]){
					check = 0;
					break;
				}
			}
			for (j = 0; len1 - 1 - j > guess;j++){
				if (in1[len1 - 1 - j] != in2[len2 - 1 - j]){
					check = 0;
				}
			}
			if (check){
				printf("POSSIBLE\n");
			}
			else{
				printf("IMPOSSIBLE\n");
			}
		}
	}
	return 0;
}
