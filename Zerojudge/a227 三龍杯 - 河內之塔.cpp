#include<stdio.h>
void out(int i, char a, char b, char c)
{
	if (i == 1){
		printf("Move ring %d from %c to %c\n", i, a, c);
	}
	else{
		out(i - 1, a, c, b);
		printf("Move ring %d from %c to %c\n", i, a, c);
		out(i - 1, b, a, c);
	}
}
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		out(in1, 'A', 'B', 'C');
		printf("\n");
	}
	return 0;
}
