#include<stdio.h>
int main()
{
	int in;
	while (scanf("%d", &in) != EOF){
		if (in < 0){
			printf("-1\n");
		}
		else{
			printf("%o\n", in);
		}
	}
	return 0;
}
