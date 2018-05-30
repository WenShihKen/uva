#include<stdio.h>
int main()
{
	int in1, in2, in3;
	while (scanf("%d%d%d", &in1, &in2, &in3) != EOF){
		int max = 0;
		if (in1*in2*in3 >= max){
			max = in1*in2*in3;
		}
		if ((in1 * 10) + in2 + in3 >= max){
			max = (in1 * 10) + in2 + in3;
		}
		if (in1 + (in2 * 10 + in3) >= max){
			max = in1 + (in2 * 10 + in3);
		}
		if (in1 * (in2 * 10 + in3) >= max){
			max = in1 * (in2 * 10 + in3);
		}
		if ((in1 * 10 + in2)*in3 >= max){
			max = (in1 * 10 + in2)*in3;
		}
		if (in1 + in2 + in3 >= max){
			max = in1 + in2 + in3;
		}
		if (in1 + (in2*in3) >= max){
			max = in1 + (in2*in3);
		}
		if ((in1*in2) + in3 >= max){
			max = (in1*in2) + in3;
		}
		printf("%d\n", max);
	}
	return 0;
}
