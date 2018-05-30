#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF){
		printf("%d\n", (a >= 6 && a <= 11) * 590 + (a >= 12 && a <= 17) * 790 + (a >= 18 && a <= 59) * 890 + (a >= 60) * 399);
	}
	return 0;
}
