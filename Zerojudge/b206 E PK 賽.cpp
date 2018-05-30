#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		char s1[130], s2[130];
		int i, len1, len2, a = 0, b = 0;
		gets(s1);
		gets(s2);
		len1 = strlen(s1);
		len2 = strlen(s2);
		for (i = 0; i < len1; i++){
			if (s1[i] == 'O')
				a++;
		}
		for (i = 0; i < len1; i++){
			if (s2[i] == 'O')
				b++;
		}
		if (len1 <= 5){
			if (len1 == len2){
				if (a - b>5 - len1){
					printf("A\n");
				}
				else if (b - a>5 - len1){
					printf("B\n");
				}
				else{
					printf("NO\n");
				}
			}
			else{
				if (a - b>5 - len2){
					printf("A\n");
				}
				else if (b - a>=5 - len2){
					printf("B\n");
				}
				else{
					printf("NO\n");
				}
			}
		}
		else{
			if (len1 == len2){
				if (a > b){
					printf("A\n");
				}
				else if (b>a){
					printf("B\n");
				}
				else{
					printf("NO\n");
				}
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}
