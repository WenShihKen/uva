#include<stdio.h>
int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		long long int temp;
		temp = in1;
		if (in1 < 0){
			in1 = 0 - in1;
		}
		long long int check = 0, a[100], i, j, temp1;
		for (i = 0; i <= 100; i++){
			a[i] = 0;
		}
		i = 0;
		while (in1 > 0){
			a[i] = in1 % 10;
			i++;
			in1 /= 10;
		}
		temp1 = i;
		for (i = 0; a[i] == 0; i++){
		}
		if (temp < 0){
			printf("-");
			for (j = i; j < temp1; j++){
				printf("%lld", a[j]);
			}
			printf("\n");
		}
		else{
			for (j = i; j < temp1; j++){
				printf("%lld", a[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
