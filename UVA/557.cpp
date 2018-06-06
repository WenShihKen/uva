#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;

double all[100005] = {};

int main()
{
	all[2] = 1;
	for (int i = 4; i <= 100000; i += 2) {
		all[i] = all[i - 2] * double(i - 3) / double(i - 2);
	}

	int in1;
	cin >> in1;
	while (in1--) {
		int in2;
		cin >> in2;
		printf("%.4lf\n", 1 - all[in2]);
	}
}