#include<stdio.h>
#include<string.h>
#include<math.h>
char s[10000010], t1[10000005];
int a[10000005] = { 0 };
int main()
{
	int all;
	while (scanf("%d\n", &all) != EOF){
		gets(s);
		int len = strlen(s), i, count1 = 1, count2 = 0;
		int temp = 0, a1 = 0;
		a[0] = 1;
		t1[0] = s[0];
		for (i = 1; i < len; i++){
			if (s[i] != s[i - 1]){
				count1++;
				count2++;
				a[count2] = 1;
				a1++;
				t1[a1] = s[i];
			}
			else{
				a[count2]++;
			}
		}
		for (i = 0; a[i] != 0; i++){
			if (a[i] < 10){
				temp += 1;
			}
			else if (a[i] < 100){
				temp += 2;
			}
			else if (a[i] < 1000){
				temp += 3;
			}
			else if (a[i] < 10000){
				temp += 4;
			}
			else if (a[i] < 100000){
				temp += 5;
			}
			else if (a[i] < 1000000){
				temp += 6;
			}
			else if (a[i] < 10000000){
				temp += 7;
			}
		}
		if (temp + count1 >= all){
			for (i = 0; i < all; i++){
				printf("%c", s[i]);
			}
		}
		else{
			for (i = 0; i < count1; i++){
				printf("%d%c", a[i], t1[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
