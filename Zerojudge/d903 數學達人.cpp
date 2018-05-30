#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

typedef unsigned long long int LL;

using namespace std;

int main()
{
	LL in1;
	while (cin >> in1) {
		LL n = 0;
		for (int i = 1; i < in1; i++) {
			n += (in1 - i)*(in1 - i)*i;
		}
		cout << n << endl;
	}
}
