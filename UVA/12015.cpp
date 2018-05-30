#include<stdio.h>
#include<string.h>
char in1[10][105];
int temp[11] = { 0 };
int main()
{
	int t, count = 1;
	scanf("%d\n", &t);
	while (t--) {
		int i, j = 0, j1 = 0, k = 0, max = 0;
		for (i = 0; i <= 10; i++) {
			temp[i] = 0;
		}
		for (i = 0; i < 10; i++) {
			gets(in1[i]);
			int len = strlen(in1[i]);
			for (j = 0; in1[i][j] != ' '; j++) {
			}
			for (j1 = j + 1; j1 < len; j1++) {
				temp[i] = temp[i] * 10 + in1[i][j1] - 48;
			}
			max = temp[i]>max ? temp[i] : max;
		}
		printf("Case #%d:\n", count++);
		for (i = 0; i < 10; i++) {
			if (max == temp[i]) {
				for (j = 0; in1[i][j] != ' '; j++) {
					printf("%c", in1[i][j]);
				}
				printf("\n");
			}
			else {
				continue;
			}
		}
	}
	return 0;
}
