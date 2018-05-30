#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int all, need, round = 0;
		scanf("%d%d", &all, &need);
		while (all > 0){
			all -= need;
			round++;
			if (all<=0){
				break;
			}
			all++;
		}
		if (all == 0){
			printf("%d\n", round);
		}
		else{
			printf("cannot do this\n");
		}
		time--;
	}
	return 0;
}
