#include<stdio.h>
#include<math.h>
int main()
{
	double in1, in2;
	while (scanf("%lf%lf", &in1, &in2) != EOF){
		if (in1 == 0.0&&in2 == 0.0){
			break;
		}
		double ans = 0.0;
		ans = sqrt(in1*in1 + in2*in2);
		if (ans - floor(ans) == 0.0){
			printf("%.0lf\n", ans);
		}
		else{
			ans = sqrt(fabs(in1*in1 - in2*in2));
			if (ans - floor(ans) == 0.0){
				printf("%.0lf\n", ans);
			}
			else{
				printf("Wrong\n");
			}
		}
	}
	return 0;
}
