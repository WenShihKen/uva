#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		printf("'C' can use printf(\"%s\",n); to show integer like %d\n","%d",n);
	}
	return 0;
}
