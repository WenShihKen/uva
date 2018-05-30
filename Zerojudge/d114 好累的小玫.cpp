#include<stdio.h>
int all[15000] = { 0 };
int main()
{
	int i, j, j1, last;
	for (i = 0; i <= 14998; i++){
		all[i] = 0;
	}
	all[0] = 1;
	for (i = 2; i < 101; i++){
		for (j = 101 - i; j > 0; j--){
			for (j1 = 0; j1 <= 14998; j1++){
				all[j1] = all[j1] * i;
			}
			for (j1 = 0; j1 <= 14998; j1++){
				if (all[j1] >= 10){
					all[j1 + 1] += all[j1] / 10;
					all[j1] %= 10;
				}
			}
		}
	}
	for (i = 14998; all[i] == 0; i--){
	}
	for (last = i; last >= 0; last--){
		printf("%d\n", all[last]);
	}
	return 0;
}
