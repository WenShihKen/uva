#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include<iostream>

using namespace std;

int all[1000005] = {};
int gcd(int m, int n) {
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

int main() {
	int in1;
	while (cin >> in1) {
		int ans1 = 0, ans2 = 0;
		fill(all, all + 1000003, 0);
		for (int i = 1; i <= 1000; i++) {
			for (int j = i + 1;; j += 2) {				
				if (gcd(i, j) != 1)
					continue;
				int a, b, c;
				a = j*j - i*i;
				b = 2 * i*j;
				c = j*j + i*i;
				if (c > in1)
					break;
				ans1++;
				int t1 = a, t2 = b, t3 = c;
				while (t3 <= in1) {
					all[t1] = all[t2] = all[t3] = true;
					t1 += a, t2 += b, t3 += c;
				}
			}
		}
		for (int i = 1; i <= in1; i++) {
			if (all[i] == 0)
				ans2++;
		}
		printf("%d %d\n", ans1, ans2);
	}
}
