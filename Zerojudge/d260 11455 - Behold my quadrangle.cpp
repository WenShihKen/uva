#include<stdio.h>
int main()
{
	long long int time;
	scanf("%lld", &time);
	while (time > 0){
		long long int l[1000], i, j, t;
		for (i = 0; i < 4; i++){
			scanf("%lld", &l[i]);
		}
		for (i = 0; i < 4; i++){
			for (j = 0; j < 4; j++){
				if (l[i] < l[j]){
					t = l[i];
					l[i] = l[j];
					l[j] = t;
				}
			}
		}
		if (l[0] == l[1] && l[1] == l[2] && l[2] == l[3]){
			printf("square\n");
		}
		else if (l[0] == l[1] && l[2] == l[3] && l[1] != l[2]){
			printf("rectangle\n");
		}
		else if (l[0] + l[1] + l[2] <= l[3]){
			printf("banana\n");
		}
		else{
			printf("quadrangle\n");
		}
		time--;
	}
	return 0;
}
