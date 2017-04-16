#include<stdio.h>
int t1[15] = { 0 }, t2[15] = { 0 };
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--) {
		int temp = 0;
		int in1, in2;
		char c;
		scanf("%x %c %x", &in1, &c, &in2);
		if (c == '+') {
			temp = in1 + in2;
		}
		else {
			temp = in1 - in2;
		}
		int i = 0, j = 0;
		for (i = 0; i < 14; i++) {
			t1[i] = t2[i] = 0;
		}
		i = 0;
		while (in1 > 0) {
			t1[i] = in1 % 2;
			in1 /= 2;
			i++;
		}
		while (in2 > 0) {
			t2[j] = in2 % 2;
			in2 /= 2;
			j++;
		}
		for (i = 12; i >= 0; i--) {
			printf("%d", t1[i]);
		}
		printf(" %c ", c);
		for (i = 12; i >= 0; i--) {
			printf("%d", t2[i]);
		}
		printf(" = %d\n", temp);
	}
	return 0;
}
