#include<stdio.h>
#include<string.h>
char in1[1030], in2[1030], real[1030];
int main()
{
	int time;
	scanf("%d\n", &time);
	while (time--){
		int len1, i, count = 1;
		gets(in1);
		gets(in2);
		len1 = strlen(in1);
		for (i = 0; i < len1; i++){
			if (in1[i] == '?'&&in2[i] != '?'){
				real[i] = in2[i];
			}
			else if (in1[i] != '?'&&in2[i] == '?'){
				real[i] = in1[i];
			}
			else if (in1[i] != '?'&&in2[i] != '?'){
				real[i] = in1[i];
			}
			else if (in1[i] == '?'&&in2[i] == '?'){
				count = 0;
				break;
			}
		}
		if (count){
			printf("Yes:");
			for (i = 0; i < len1; i++){
				printf("%c", real[i]);
			}
			printf("\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
