#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF) {
		long long int a[1000] = { 0 }, i = 0, j;
		if (in1 < 0) {
			break;
		}
		else if (in1 == 0) {
			printf("0\n");
		}
		else {
			while (in1 > 0) {
				a[i] = in1 % 3;
				in1 /= 3;
				i++;
			}
			for (j = i - 1; j >= 0; j--) {
				printf("%lld", a[j]);
			}
			printf("\n");
		}
	}
	return 0;
}

