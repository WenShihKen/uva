#include<stdio.h>
int main()
{
	int round;
	scanf("%d", &round);
	while (round--){
		int empty, find, exchange, all = 0, drink = 0, temp = 0;
		scanf("%d%d%d", &empty, &find, &exchange);
		all = empty + find;
		while (all >= exchange){
			drink += all / exchange;
			temp = all%exchange;
			all = all / exchange + temp;
		}
		printf("%d\n", drink);
	}
	return 0;
}
