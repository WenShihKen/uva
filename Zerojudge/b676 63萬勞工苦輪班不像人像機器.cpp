#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	char c[5] = { 'U','G','Y','T','I' };
	int in1;
	while (cin >> in1) {
		cout << c[in1 % 5] << endl;
	}
}
