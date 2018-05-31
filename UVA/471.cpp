#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include<iostream>

using namespace std;
int check[15] = {};

bool visit(long long int in1) {
	fill(check, check + 13, 0);
	while (in1) {
		if (check[in1 % 10])
			return false;
		check[in1 % 10] += 1;
		in1 /= 10;
	}
	return true;
}

int main()
{
	int in1;
	cin >> in1;
	while (in1--) {
		long long int in2;
		cin >> in2;
		for (long long int i = 1; in2*i <= 9876543210; i++) {
			long long int test = in2*i;
			if (visit(test) && visit(i))
				printf("%lld / %lld = %lld\n", test, i, in2);
		}

		if (in1)
			cout << endl;
	}
}