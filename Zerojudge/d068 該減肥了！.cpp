#include<stdio.h>
int main()
{
	int weight;
	while (scanf("%d", &weight) != EOF){
		printf("%d\n", weight - (weight > 50));
	}
}
