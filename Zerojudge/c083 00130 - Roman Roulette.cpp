#include <stdio.h>
int main()
{
	int n, k;
	while (scanf("%d%d", &n, &k) == 2) {
		if (n == 0 && k == 0)    break;
		if (n == 1) { puts("1");  continue; }
		int p[101], kill, temp = 1, total = n;
		for (int i = 1; i <= n; i++)  p[i] = i;
		while (total > 1) {
			int count = 0;
			while (count < k) {
				if (temp > n)   temp = 1;
				if (p[temp]) count++;
				temp++;
			}
			kill = temp - 1;
			p[kill] = 0;
			count = 0;
			while (count < k) {
				if (temp > n)   temp = 1;
				if (p[temp]) count++;
				temp++;
			}
			p[kill] = p[temp - 1];
			p[temp - 1] = 0;
			temp = kill + 1;
			total--;
		}
		if (p[kill] == 1)    puts("1");
		else    printf("%d\n", n - (p[kill] - 1) + 1);
	}
	return 0;
}
