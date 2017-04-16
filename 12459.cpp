#include<stdio.h>
long long int all[85] = { 0 };
int main()
{
	int i;
	all[1] = 1;
	all[2] = 2;
	for (i = 3; i <= 80; i++) {
		all[i] = all[i - 1] + all[i - 2];
	}
	int find;
	while (scanf("%d", &find) != EOF) {
		if (find == 0) {
			break;
		}
		printf("%lld\n", all[find]);
	}
	return 0;
}
