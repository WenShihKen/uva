#include<stdio.h>
int main()
{
	long long int time;
	while (scanf("%lld", &time) != EOF){
		int count;
		for (count = 1; count <= time; count++){
			printf("I don't say swear words!\n");
		}
	}
	return 0;
}
