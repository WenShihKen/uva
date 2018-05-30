#include<stdio.h>
#include<math.h>
int all[500010][3] = { 0 };
int count[500010] = { 0 };
int main()
{
	int i;
	int in1, in2, in3, find = 0;
	for (in1 = 0; in1 <= 225; in1++){
		for (in2 = in1; in2 <= 225; in2++){
			for (in3 = in2; in3 <= 225; in3++){
				if (count[in1*in1 + in2*in2 + in3*in3] == 0){
					all[in1*in1 + in2*in2 + in3*in3][0] = in1;
					all[in1*in1 + in2*in2 + in3*in3][1] = in2;
					all[in1*in1 + in2*in2 + in3*in3][2] = in3;
					count[in1*in1 + in2*in2 + in3*in3] = 1;
				}
			}
		}
	}
	int t;
	scanf("%d", &t);
	while (t--){
		int know;
		scanf("%d", &know);
		if (count[know]){
			printf("%d %d %d\n", all[know][0], all[know][1], all[know][2]);
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
