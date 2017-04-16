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
	long long int in1, in2;
	while (cin >> in1 >> in2) {
		long double digits = 0;
		for (long long int i = in1 - in2 + 1; i <= in1; i++) {
			digits += log10((double)i);
		}
		for (long long int i = 1; i <= in2; i++) {
			digits -= log10((double)i);
		}
		cout << (long long int)(digits) + 1 << endl;
	}
}