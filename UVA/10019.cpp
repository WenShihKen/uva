#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int in1, b1 = 0, b2 = 0;
		cin >> in1;
		int temp1 = in1, temp2 = in1, x[6], i = 0;
		while (temp1) {
			if (temp1 % 2 == 1) {
				b1++;
			}
			temp1 /= 2;
		}
		while (temp2) {
			x[i++] = temp2 % 10;
			temp2 /= 10;
		}
		for (int j = 0; j < i; j++) {
			while (x[j]) {
				if (x[j] % 2 == 1) {
					b2++;
				}
				x[j] /= 2;
			}
		}
		printf("%d %d\n", b1, b2);
	}
	return 0;
}