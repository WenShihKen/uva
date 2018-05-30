#include<stdio.h>
int main()
{
	long long int many;
	while (scanf("%lld", &many) != EOF){
		long long int price[10000], i, time;
		for (i = 0; i < many; i++){
			scanf("%lld", &price[i]);
		}
		scanf("%lld", &time);
		while (time > 0){
			long long int in1, in2, sum = 0;
			scanf("%lld%lld", &in1, &in2);
			sum += (price[in1] + price[in2]);
			printf("%lld\n", sum);
			time--;
		}
	}
	return 0;
}
