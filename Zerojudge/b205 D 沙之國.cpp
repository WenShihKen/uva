#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int in1;
		int t1, t3, t9, t27;
		scanf("%d", &in1);
		t27 = in1 / 27;
		in1 -= t27 * 27;
		t9 = in1 / 9;
		in1 -= t9 * 9;
		t3 = in1 / 3;
		in1 -= t3 * 3;
		t1 = in1 / 1;
		printf("%d\n", t27 + t9 + t3 + t1);
	}
	return 0;
}
