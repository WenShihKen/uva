#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	int in1;
	printf("PERFECTION OUTPUT\n");
	while (cin >> in1) {
		if (in1 == 0) {
			printf("END OF OUTPUT\n");
			break;
		}
		else if (in1 == 1) {
			printf("%5d  DEFICIENT\n", in1);
			continue;
		}
		int factor = 1;
		for (int i = 2; i <= sqrt(in1); i++) {
			if (in1%i == 0) {
				factor += (in1 / i + i);
			}
		}
		if (factor == in1) {
			printf("%5d  PERFECT\n", in1);
		}
		else if (factor < in1) {
			printf("%5d  DEFICIENT\n", in1);
		}
		else if (factor > in1) {
			printf("%5d  ABUNDANT\n", in1);
		}
	}
}