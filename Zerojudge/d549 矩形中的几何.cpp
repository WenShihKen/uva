#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int main()
{
	unsigned long long int in1, in2, in3;
	while (cin >> in1 >> in2 >> in3) {
		printf("%.2lf\n", sqrt(in1*in1 + in3*in3 - in2*in2));
	}
}
