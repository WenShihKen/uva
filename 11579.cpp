#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int in1, find = 0;
		double all[10005] = {}, area = 0.0, max = 0.0;
		scanf("%d", &in1);
		for (int i = 0; i < in1; i++)
			scanf("%lf", &all[i]);
		sort(all, all + in1);
		for (int i = in1 - 1; i >= 2; i--) {
			if (all[i] < all[i - 1] + all[i - 2]) {
				double s = (all[i] + all[i - 1] + all[i - 2]) / 2;
				area = sqrt(s*(s - all[i])*(s - all[i - 1])*(s - all[i - 2]));
				max = max > area ? max : area;
			}
		}
		printf("%.2lf\n", max);
	}
	return 0;
}