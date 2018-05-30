#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
#include <cstdlib> 
#include <cstdio>
#include <stdlib.h> 
using namespace std;

int main() {
	int in1;
	while (cin >> in1) {
		while (in1--) {
			int ans = 1, in2;
			cin >> in2;
			for (int i = 2; i <= sqrt(in2); i++) {
				if (in2%i == 0) {
					if (in2 / i == sqrt(in2)) {
						ans += i;
					}
					else {
						ans += (in2 / i) + i;
					}
				}
			}
			if (in2 == ans) {
				cout << "perfect" << endl;
			}
			else if (in2 > ans) {
				cout << "deficient" << endl;
			}
			else if (in2 < ans) {
				cout << "abundant" << endl;
			}
		}
	}
}
