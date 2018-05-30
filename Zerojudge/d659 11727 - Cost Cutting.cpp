#include<stdio.h>
int main()
{
	int time, count = 1;
	scanf("%d", &time);
	while (count<=time){
		int salary[3];
		int i, j, temp;
		scanf("%d%d%d", &salary[0], &salary[1], &salary[2]);
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (salary[i] < salary[j]){
					temp = salary[i];
					salary[i] = salary[j];
					salary[j] = temp;
				}
			}
		}
		printf("Case %d: %d\n", count, salary[1]);
		count++;
	}
	return 0;
}
