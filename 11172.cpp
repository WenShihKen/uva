#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0) {
		long long int in1, in2;
		scanf("%lld%lld", &in1, &in2);
		if (in1 > in2) {
			printf(">\n");
		}
		else if (in1 < in2) {
			printf("<\n");
		}
		else if (in1 == in2) {
			printf("=\n");
		}
		time--;
	}
	return 0;
}
