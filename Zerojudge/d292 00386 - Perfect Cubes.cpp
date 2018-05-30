#include<stdio.h>
int main()
{
	long long int c, in1, in2, in3, i;
	for (c = 6; c <= 200; c++){
		for (in1 = 2; in1 <= c; in1++){
			for (in2 = in1 + 1; in2 <= c; in2++){
				if (in1*in1*in1 >= in2*in2*in2){
					continue;
				}
				for (in3 = in2 + 1; in3 <= c; in3++){
					if (in1*in1*in1 >= in3*in3*in3 || in2*in2*in2 >= in3*in3*in3){
						continue;
					}
					if (in1*in1*in1 + in2*in2*in2 + in3*in3*in3 == c*c*c){
						printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n", c, in1, in2, in3);
					}
				}
			}
		}
	}
	return 0;
}
