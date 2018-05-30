#include<stdio.h>
int main()
{
	int a, b, c, i;
	char s[10001];
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		printf("%d", a / b);
		a = a%b;
		if (c > 0){
			for (i = 0; i < c; i++){
				a = a * 10;
				s[i] = a / b + '0';
				a = a % b;
			}
			s[i] = '\0';
			printf(".%s", s);
		}
		printf("\n");
	}
	return 0;
}
