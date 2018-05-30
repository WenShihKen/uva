#include<stdio.h>
#include<string.h>
char in1[100], in2[100];
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--) {
		gets(in1);
		int i, j = 0, len = strlen(in1), t = 0;
		for (i = 0; i < len; i++) {
			if (in1[i] != ' ') {
				in2[j] = in1[i];
				j++;
			}
			else {
				continue;
			}
		}
		for (i = 0; i < j; i += 2) {
			int temp = in2[i] - 48;
			temp *= 2;
			while (temp > 0) {
				t += temp % 10;
				temp /= 10;
			}
		}
		for (i = 1; i < j; i += 2) {
			t += (in2[i] - 48);
		}
		if (t % 10) {
			printf("Invalid\n");
		}
		else {
			printf("Valid\n");
		}
	}
	return 0;
}
