#include <stdio.h>
int main()
{
	int n, num[10000], top = 0, i;
	while (scanf("%d", &n) == 1){
		i = ++top;
		while (n < num[i - 1] && top > 1)
		num[i] = num[i - 1], i--;
		num[i] = n;
		if (top % 2) printf("%d\n", num[top / 2 + 1]);
		else printf("%d\n", (num[top / 2] + num[top / 2 + 1]) / 2);
	}
	return 0;
}
