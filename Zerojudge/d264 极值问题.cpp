#include<stdio.h>
long long int all[85] = { 0 };
int main()
{
	int i;
	all[0] = 1, all[1] = 1;
	for (i = 2; i < 84; i++){
		all[i] = all[i - 1] + all[i - 2];
	}
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		int j;
		for (j = 0; j < 84; j++){
			if (all[j] > in1){
				break;
			}
		}
		printf("%lld %lld\n", all[j - 2], all[j - 1]);
	}
	return 0;
}
