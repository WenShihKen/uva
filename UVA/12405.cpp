#include<stdio.h>
#include<string.h>
char in1[105];
int main()
{
	int t, count = 1;
	scanf("%d\n", &t);
	while (t--) {
		int len, sum = 0;
		scanf("%d\n", &len);
		gets(in1);
		for (int i = 0; i < len; i++) {
			if (in1[i] == '.') {
				sum++, i += 2;
			}
		}
		printf("Case %d: %d\n", count++, sum);
	}
	return 0;
}
