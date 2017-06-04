#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int t[15] = {};
	for (int i = 1; i <= 14; i++) {
		int m = i + 1;
		while (1) {
			int kill = -1, all = i * 2;
			while (all > i) {
				kill += m;
				kill %= all;
				if (kill < i)
					break;
				all--;
				kill--;
			}
			if (all == i) {
				t[i] = m;
				break;
			}
			m++;
		}
	}
	int k;
	while (cin >> k&&k != 0) {
		cout << t[k] << endl;
	}
}