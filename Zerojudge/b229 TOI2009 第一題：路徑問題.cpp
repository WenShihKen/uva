#include<stdio.h>
long double all[51] = { 0 };
int main()
{
	int i;
	all[0] = 3, all[1] = 7;
	for (i = 2; i <= 50; i++){
		all[i] = 2 * all[i - 1] + all[i - 2];
	}
	int f;
	while (scanf("%d", &f) != EOF){
		printf("%.0llf\n", all[f-1]);
	}
	return 0;
}
