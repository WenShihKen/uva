#include<stdio.h>
#include<string.h>
#include<math.h>
char all[10005];
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		gets(all);
		int i, len = strlen(all), temp = sqrtl(len), j;
		double t = len;
		if (ceill(sqrtl(t)) - floorl(sqrtl(t))){
			printf("INVALID\n");
		}
		else{
			for (i = 0; i < temp; i++){
				for (j = 0; j < temp; j++){
					printf("%c", all[j*temp + i]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
