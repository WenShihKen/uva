#include<stdio.h>
double x1[10010] = { 0.0 }, y1[10010] = { 0.0 }, x2[10010] = { 0.0 }, y2[10010] = { 0.0 };
int main()
{
	int i, j = 1, all, count = 0, k = 1;
	for (i = 1;; i++){
		char s;
		scanf("%c", &s);
		if (s == '*'){
			break;
		}
		else{
			scanf("%lf%lf%lf%lf", &x1[j], &y1[j], &x2[j], &y2[j]);
		}
		j++;
	}
	double check1, check2;
	while (scanf("%lf%lf", &check1, &check2) != EOF){
		if (check1 == 9999.9&&check2 == 9999.9){
			break;
		}
		else{
			for (all = 1; all <= i - 1; all++){
				if (check1 > x1[all] && check2 < y1[all] && check1 < x2[all] && check2 > y2[all]){
					if (all % 2 == 0){
						printf("Point %d is contained in figure %d\n", k, all / 2);
					}
					else{
						printf("Point %d is contained in figure %d\n", k, (all / 2) + 1);
					}
				}
				else{
					count--;
				}
				count++;
			}
			if (count == 0){
				printf("Point %d is not contained in any figure\n", k);
			}
			count = 0;
		}
		k++;
	}
	return 0;
}
