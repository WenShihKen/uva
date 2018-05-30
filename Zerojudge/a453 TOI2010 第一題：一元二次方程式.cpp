#include<stdio.h>
#include<math.h>
int main()
{
	int round;
	while (scanf("%d", &round) != EOF){
		int i;
		for (i = 0; i < round; i++){
			double a, b, c;
			double in1, in2;
			scanf("%lf%lf%lf", &a, &b, &c);
			if (b*b - 4 * a*c >= 0){
				in1 = sqrt(b*b - 4 * a*c);
				in2 = floor(sqrt((b*b - 4 * a*c)));
				if (in1 - in2 == 0.0){
					printf("Yes\n");
				}
				else{
					printf("No\n");
				}
			}
			else{
				printf("No\n");
			}
		}
	}
	return 0;
}
