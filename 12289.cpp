#include<stdio.h>
#include<string.h>
int main()
{
	int i, many;
	scanf("%d", &many);
	for (i = 0; i < many; i++) {
		char s[100];
		int len = 0;
		scanf("%s", s);
		len = strlen(s);
		if (len == 5) {
			printf("3\n");
		}
		else {
			if ((s[0] == 'o'&&s[1] == 'n') || (s[0] == 'o'&&s[2] == 'e') || (s[2] == 'e'&&s[1] == 'n')) {
				printf("1\n");
			}
			else {
				printf("2\n");
			}
		}
	}
	return 0;
}
