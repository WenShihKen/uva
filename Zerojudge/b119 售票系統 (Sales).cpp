#include<stdio.h>
#define LL long long int
int main()
{
	LL in1, in2, in3;
	while (scanf("%lld%lld%lld", &in1, &in2, &in3) != EOF){
		LL need = in1*in2 * 3 / 10, i, temp[20] = { 0 };
		LL sell = 0, t1 = in2 * 2 / 10, t2 = in2 * 4 / 10, t3 = in2 * 6 / 10;
		LL earn = 0;
		for (i = 0; i < in3; i++){
			scanf("%lld", &temp[i]);
			sell += temp[i];
		}
		if (sell <= t1){
			earn = (sell*in1 * 7 / 10);
		}
		else if (sell <= t2){
			earn = (t1*in1 * 7 / 10) + ((sell - t1)*in1 * 8 / 10);
		}
		else if (sell <= t3){
			earn = (t1*in1 * 7 / 10) + (t1*in1 * 8 / 10) + ((sell - (t1 * 2))*in1 * 9 / 10);
		}
		else{
			earn = (t1*in1 * 7 / 10) + (t1*in1 * 8 / 10) + (t1*in1 * 9 / 10) + ((sell - (t1 * 3))*in1);
		}
		printf("%lld\n", earn - need);
	}
	return 0;
}
