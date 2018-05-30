#include <stdio.h>
int main()
{
	int i, n, temp, a[2001];
		while (scanf("%d", &n) == 1) {
			for (i = 0; i < 2001; i++){
				a[i] = 0;
			}
			for (i = 0; i<n; i++) {
			scanf("%d", &temp);
			a[temp] = 1;		
		}
		for (i = 1; a[i] == 1; i++);
		printf("%d\n", i);
	}
	return 0;
}
