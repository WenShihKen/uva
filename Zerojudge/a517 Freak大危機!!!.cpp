#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;

typedef unsigned long long int ULL;

int main()
{
	ULL in1, in2, in3;
	while (scanf("%llu%llu%llu", &in1, &in2, &in3) != EOF) {
		printf("%llu\n", in1 + in2 + in3 - 2 * (min(in1, min(in2, in3))));
	}
}
