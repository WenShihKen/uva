#include<stdio.h>
#include<math.h>
int main()
{
	int in1, in2, in3, in4;
	while (scanf("%d%d%d%d", &in1, &in2, &in3, &in4) != EOF){
		int all = 0;
		all += in4;
		all += in3;
		in1 -= 37 * in3;
		all += ceil(in2 / 8.0);
		in1 -= (in2 % 8) * 8;
		if (in1 > 0){
			all += ceil(in1 / 64.0);
		}
		printf("%d\n", all);
	}
	return 0;
}
