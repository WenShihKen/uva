#include<stdio.h>
#include<string.h>
int main()
{
	char s[10000];
	while (gets(s)) {
		int len, w = 0, i;
		len = strlen(s);
		for (i = 0; i < len; i++) {
			if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z')) {
				w++;
				for (; i < len && (s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'); i++) {
				}
			}
		}
		printf("%d\n", w);
	}
	return 0;
}
