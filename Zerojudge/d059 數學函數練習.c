#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int a1, a2, c1, d1, d2;
	double b1,ans2;
	int ans1, ans3, ans4;
	scanf("%d%d%lf%d%d%d", &a1, &a2, &b1, &c1, &d1, &d2);
	ans1 = pow(a1, a2);
	ans2 = sqrt(b1);
	ans3 = abs(c1);
	srand(time(NULL));
	ans4 = (rand() % d2) + d1;
	printf("%d\n%.3lf\n%d\n%d\n", ans1, ans2, ans3, ans4);
	return 0;
}
