#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int all[] = {2,3,5,7,13,17,19,31,61,89,107,127,521,607,1279,2203,2281,3217,4253,4423,9689,9941,11213,19937,21701,23209,44497,86243,110503,132049,216091,756839,859433,1257787,1398269};
	int in1;
	while (cin >> in1&&in1 != 0) {
		bool find = false;
		for (int i = 0; i < 35; i++) {
			if (in1 == all[i]) {
				find ^= 1;
				break;
			}
		}
		if (find)
			printf("yes\n");
		else
			printf("no\n");
	}
}
