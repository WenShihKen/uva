#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int in1;
	while (cin >> in1) {
		int all[105][105] = {};
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in1; j++) {
				cin >> all[i][j];
			}
		}
		for (int i = 1; i < in1; i++) {
			all[i][0] += all[i - 1][0];
		}
		for (int i = 1; i < in1; i++) {
			all[0][i] += all[0][i - 1];
		}
		for (int i = 1; i < in1; i++) {
			for (int j = 1; j < in1; j++) {
				if (all[i - 1][j] < all[i][j - 1]) {
					all[i][j] += all[i][j - 1];
				}
				else {
					all[i][j] += all[i - 1][j];
				}
			}
		}
		cout << all[in1 - 1][in1 - 1] << endl;
	}
}
