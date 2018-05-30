#include<stdio.h>
#include<string.h>
#include<math.h>
char in1[10000];
int main()
{
	while (gets(in1)){
		int i, max = 0, count = 0, len = strlen(in1);
		for (i = 0; i < len; i++){
			if (in1[i] == ' '){
				while (in1[i] == ' '){
					i++;
					count++;
				}
				if (count > max){
					max = count;
				}
				count = 0;
			}
		}
		printf("%.0llf\n", ceill(log2l(max)));
	}
	return 0;
}
