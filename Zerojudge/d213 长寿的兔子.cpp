#include<stdio.h>
long long unsigned temp[65] = { 0 }, all[65] = { 0 };
int main()
{
	int i;
	temp[0] = all[0] = 2;
	for (i = 1; i < 10; i++){
		temp[i] = temp[i - 1] * 2;
		all[i] = all[i - 1] + temp[i];
	}
	for (; i < 63; i++){
		temp[i] = temp[i - 1] * 2;
		all[i] = temp[i] + all[i - 1] - temp[i - 10];
	}
	int in1;
	while(scanf("%d", &in1) != EOF){
		printf("%llu\n", all[in1]);
	}
	return 0;
}
