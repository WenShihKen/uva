#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
using namespace std;
bool all[1500005] = {};
int main()
{
	fill(all, all + 1500003, true);
	for (int i = 1; i <= 1000000; i++) {
		int temp = i, self = i;
		while (temp) {
			self += (temp % 10);
			temp /= 10;
		}
		all[self] = false;
	}
	for (int i = 1; i <= 1000000; i++) {
		if (all[i])
			cout << i << endl;
	}
}
