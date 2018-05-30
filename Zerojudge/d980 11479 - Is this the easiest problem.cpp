#include<stdio.h>
long long int all[10] = { 0 };
int main()
{
	long long int time, count = 1;
	scanf("%lld", &time);
	while (time--){
		long long int i = 0, j, temp = 0;
		for (i = 0; i < 3; i++){
			scanf("%lld", &all[i]);
		}
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (all[i] < all[j]){
					temp = all[i];
					all[i] = all[j];
					all[j] = temp;
				}
			}
		}
		if (all[0] + all[1] <= all[2]){
			printf("Case %lld: Invalid\n", count);
		}
		else if (all[0] == all[1] && all[1] == all[2]){
			printf("Case %lld: Equilateral\n", count);
		}
		else if (all[0] == all[1] || all[1] == all[2]){
			printf("Case %lld: Isosceles\n", count);
		}
		else{
			printf("Case %lld: Scalene\n", count);
		}
		count++;
	}
	return 0;
}
