#include<stdio.h>
#include<string.h>
char in1[5000];
int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--){
		gets(in1);
		int i, len, change = 0, time = 0, now = 0;
		len = strlen(in1);
		for (i = 0; i < len; i++){
			if (in1[i] >= 48 && in1[i] <= 57){
				time++;
			}
			else if (in1[i] == ' '){
				i++;
				break;
			}
		}
		if (time == 1){
			change = in1[0] - 48;
		}
		else{
			change = (in1[0] - 48) * 10 + in1[1] - 48;
		}
		for (now = i; now < len; now++){
			in1[now] -= change;
			if (in1[now] < 65){
				in1[now] += 26;
			}
			printf("%c", in1[now]);
		}
		printf("\n");
	}
	return 0;
}
