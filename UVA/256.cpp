#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int in1;
	int temp[] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000 };
	while (cin >> in1) {
		int i = 1;
		for (int t = 0;; t++) {
			i = t*t;
			if (i >= temp[in1])
				break;
			if ((i%temp[in1 / 2] + i / temp[in1 / 2])*(i%temp[in1 / 2] + i / temp[in1 / 2]) == i) {
				printf("%0*d\n", in1, i, i / temp[in1 / 2], i%temp[in1 / 2]);
			}
		}
	}
	return 0;
}