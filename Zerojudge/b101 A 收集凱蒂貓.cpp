#include<stdio.h>
int main()
{
	int some;
	while (scanf("%d", &some) != EOF){
		if (some == 0){
			break;
		}
		int i, people, min = 999999, all[50] = { 0 }, j, t;
		for (i = 0; i < some; i++){
			scanf("%d", &people);
			for (j = 1; j <= people; j++){
				scanf("%d", &t);
				all[t]++;
			}
		}
		for (i = 1; i <= 41; i++){
			if (all[i] < min){
				min = all[i];
			}
		}
		printf("%d\n", min);
	}
	return 0;
}
