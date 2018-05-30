#include <iostream>
#include <stdio.h>
#include <string>
#include<cmath>
using namespace std;

int main() {
	string in1, in2;
	while (getline(cin, in1)) {
		getline(cin, in2);
		if (in1[0] >= in2[0]) {
			cout << abs(in1[0] - in2[0] - 26) % 26 << endl;
		}
		else {
			cout << abs(in1[0] - in2[0]) << endl;
		}
	}
}
