#include<stdio.h>
int main()
{
	int time, temp = 1;
	scanf("%d", &time);
	while (temp <= time) {
		int in1, in2, sum = 0, count;
		scanf("%d", &in1);
		scanf("%d", &in2);
		for (count = in1; count <= in2; count++) {
			if (count % 2 == 1) {
				sum += count;
			}
			else {
				continue;
			}
		}
		printf("Case %d: %d\n", temp, sum);
		temp++;
	}
	return 0;
}
