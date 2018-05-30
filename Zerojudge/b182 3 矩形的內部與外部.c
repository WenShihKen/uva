#include<stdio.h>
#include<math.h>
int xlow[50] = { 0 }, xhigh[50] = { 0 }, ylow[50] = { 0 }, yhigh[50] = { 0 };
int area[50] = { 0 };
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int i, j;
		for (i = 0; i < in1; i++){
			scanf("%d%d%d%d", &xlow[i], &ylow[i], &xhigh[i], &yhigh[i]);
			area[i] = abs(xlow[i] - xhigh[i])*abs(ylow[i] - yhigh[i]);
		}
		int x1, y1;
		long long int all = 0;
		for (i = 0; i < in2; i++){
			scanf("%d%d", &x1, &y1);
			for (j = 0; j < in1; j++){
				if (((x1 >= xlow[j] && x1 <= xhigh[j]) || (x1 <= xlow[j] && x1 >= xhigh[j])) && ((y1 >= ylow[j] && y1 <= yhigh[j]) || (y1 <= ylow[j] && y1 >= yhigh[j]))){
					all += area[j];
				}
			}
			printf("%lld\n", all);
			all = 0;
		}
	}
	return 0;
}
