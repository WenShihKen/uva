#include<stdio.h>
int main()
{
	int l, w, x, y;
	while (scanf("%d%d%d%d", &l, &w, &x, &y) != EOF){
		if (l == 0 && w == 0 && x == 0 && y == 0){
			break;
		}
		else if (l%x == 0 && w%y == 0){
			printf("%d\n", (l / x)*(w / y));
		}
		else if (l%y == 0 && w%x == 0){
			printf("%d\n", (l / y)*(w / x));
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
