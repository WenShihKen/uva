#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int in1;
	cin >> in1;
	while (in1--) {
		long long int in2;
		cin >> in2;
		printf("%lld\n", (in2 + 1)*(in2 + 1) - 1);
	}
}