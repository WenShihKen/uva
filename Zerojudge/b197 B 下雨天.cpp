#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int line;
		scanf("%d", &line);
		int i, out1 = 0;
		double min = 999999.0;
		for (i = 0; i < line; i++){
			double temp = 0.0;
			int x1, y1, x2, y2, s;
			scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &s);
			x1 = (x1>x2) ? (x1 - x2) : (x2 - x1);
			y1 = (y1>y2) ? (y1 - y2) : (y2 - y1);
			temp = sqrtl(x1*x1 + y1*y1)*s / x1;
			if (temp < min){
				out1 = i;
				min = temp;
			}
		}
		printf("%d\n", out1 + 1);
	}
	return 0;
}
