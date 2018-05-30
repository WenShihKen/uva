#include<stdio.h>
int main()
{
	int pencils;
	while (scanf("%d", &pencils) != EOF){
		int i = 0;
		i = pencils / 12;
		pencils = pencils - (i * 12);
		printf("%d\n", i * 50 + pencils * 5);
	}
}
