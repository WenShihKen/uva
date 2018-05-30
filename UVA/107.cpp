#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define e 1e-8

using namespace std;

int main() {
	int in1, in2;
	while (cin >> in1 >> in2) {
		if (in1 == 1 && in2 == 1) {
			printf("0 1\n");
			continue;
		}
		if (in1 == 0 && in2 == 0)
			break;

		int not_work = 1, temp;
		while (in1 != (int)(pow(pow(in2, 1.0 / not_work) + 1.0, not_work) + e))
			not_work++;
		temp = pow(in2, 1.0 / not_work) + e;
		if (temp != 1)
			printf("%d %d\n", (1 - in2) / (1 - temp), (in1 - in2)*(temp + 1) + in2);
		else
			printf("%d %d\n", not_work, (in1 - in2)*(temp + 1) + in2);
	}
}