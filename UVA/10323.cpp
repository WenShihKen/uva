#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int in1;
	long long int f[] = { 1,1,2,6,24,120,720,5040,40320,362880,3628800,
	39916800,479001600,6227020800 };
	while (cin >> in1) {
		if (in1 >= 0) {
			if (in1 >= 8 && in1 <= 13)
				printf("%lld\n", f[in1]);
			else if (in1 > 13)
				printf("Overflow!\n");
			else
				printf("Underflow!\n");
		}
		else {
			if (in1 % 2 == 0)
				printf("Underflow!\n");
			else
				printf("Overflow!\n");
		}
	}
}