#include<stdio.h>
int main()
{
	long long int in1, in2, in3;
	while (scanf("%lld%lld%lld", &in1, &in2, &in3) != EOF){
		long long int min, t1, t2;
		t1 = in1 / 10; t2 = in3 / 2;
		if (t1 >= t2){
			min = t2;
		}
		else{
			min = t1;
		}
		printf("%lld 個餅乾，%lld 盒巧克力，%lld 個蛋糕。\n", in1, in2 + min, in3);
	}
	return 0;
}
