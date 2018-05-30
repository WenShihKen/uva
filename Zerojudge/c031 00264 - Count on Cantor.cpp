#include<stdio.h>
long long int a[100001];
int main()
{
	long long int i, sum = 0, f;
	for (i = 1; sum <= 10000000; i++){
		sum += i;
		a[i] = sum;
	}
	while (scanf("%lld", &f) != EOF){ /*count是奇數往上數 偶數往下數*/
		long long int count = 1;
		while (f > a[count]){
			count++;
		}
		if (count % 2 == 0){
			long long int a1 = 1, a2 = count, temp; /*a1是分子 a2是分母*/
			long long int j;
			temp = f - a[count - 1];
			for (j = temp; j > 1; j--){
				a1++; a2--;
			}
			printf("TERM %lld IS %lld/%lld\n", f, a1, a2);
		}
		else{
			long long int a1 = count, a2 = 1, temp; /*a1是分子 a2是分母*/
			long long int j;
			temp = f - a[count - 1];
			for (j = temp; j > 1; j--){
				a1--; a2++;
			}
			printf("TERM %lld IS %lld/%lld\n", f, a1, a2);
		}
	}
	return 0;
}
