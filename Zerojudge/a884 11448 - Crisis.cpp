#include<stdio.h>      /*大數A-B*/
#include<string.h>
char in1[30000];
int t1[10005] = { 0 }, t2[10005] = { 0 };
int ans[10005] = { 0 };
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		gets(in1);
		int i, len = strlen(in1), j;
		int i1 = 0, i2 = 0;
		for (i = 0; i <= 10004; i++){
			t1[i] = 0, t2[i] = 0, ans[i] = 0;
		}
		for (i = len - 1; in1[i] != ' '; i--){   /*B*/
			t1[i1] = in1[i] - 48;
			i1++;
		}
		for (j = i - 1; j >= 0; j--){          /*A*/
			t2[i2] = in1[j] - 48;
			i2++;
		}
		if (i2 > i1){
			for (i = 0; i < i2; i++){
				ans[i] += (t2[i] - t1[i]);
				if (ans[i] < 0){
					ans[i] += 10;
					ans[i + 1] -= 1;
				}
			}
			for (i = 10004; ans[i] == 0; i--){
			}
			for (j = i; j >= 0; j--){
				printf("%d", ans[j]);
			}
			printf("\n");
		}
		else if (i1>i2){
			for (i = 0; i < i1; i++){
				ans[i] += (t1[i] - t2[i]);
				if (ans[i] < 0){
					ans[i] += 10;
					ans[i + 1] -= 1;
				}
			}
			printf("-");
			for (i = 10004; ans[i] == 0; i--){
			}
			for (j = i; j >= 0; j--){
				printf("%d", ans[j]);
			}
			printf("\n");
		}
		else if (i1 == i2){
			int check = 2;   /*判斷2一樣大 0 A小於B 1 A大於B*/
			for (i = i1 - 1; i >= 0; i--){
				if (t2[i] > t1[i]){
					check = 1;
					break;
				}
				else if (t2[i] < t1[i]){
					check = 0;
				}
			}
			if (check == 2){
				printf("0\n");
			}
			else if (check == 1){
				for (i = 0; i < i2; i++){
					ans[i] += (t2[i] - t1[i]);
					if (ans[i] < 0){
						ans[i] += 10;
						ans[i + 1] -= 1;
					}
				}
				for (i = 10004; ans[i] == 0; i--){
				}
				for (j = i; j >= 0; j--){
					printf("%d", ans[j]);
				}
				printf("\n");
			}
			else if (check == 0){
				for (i = 0; i < i1; i++){
					ans[i] += (t1[i] - t2[i]);
					if (ans[i] < 0){
						ans[i] += 10;
						ans[i + 1] -= 1;
					}
				}
				printf("-");
				for (i = 10004; ans[i] == 0; i--){
				}
				for (j = i; j >= 0; j--){
					printf("%d", ans[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
