#include<stdio.h>

int rec(int in1)
{
	if (in1 <= 100) {
		rec(rec(in1 + 11));
	}
	else {
		return in1 - 10;
	}
}

int main()
{
	int in1;
	while (scanf_s("%d", &in1)) {
		if (in1 == 0)
			break;
		printf("f91(%d) = %d\n", in1, rec(in1));
	}
	return 0;
}