#include<stdio.h>
int floor[150] = { 0 };
int main()
{
	int t;
	while (scanf("%d", &t) != EOF){
		if (t == 0)
			break;
		int i, spend = 0;
		for (i = 0; i < t; i++){
			scanf("%d", &floor[i]);
		}
		for (i = 0; i < t - 1; i++){
			if (floor[i]>floor[i + 1]){
				spend += (floor[i] - floor[i + 1]) * 10;
			}
			else if (floor[i] < floor[i + 1]){
				spend += (floor[i + 1] - floor[i]) * 20;
			}
			else{
				continue;
			}
		}
		printf("%d\n", spend);
	}
	return 0;
}
