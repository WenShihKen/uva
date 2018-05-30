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
bool sieve[1000005] = {};
int prime[100000] = {};
typedef long long int LL;
int main() {
	int count = 0;
	sieve[0] = sieve[1] = true;
	for (int i = 2; i <= sqrt(1000002); i++) {
		if (!sieve[i]) {
			for (int k = (1000002 - 1) / i, j = i*k; k >= i; k--, j -= i)
				if (!sieve[k]) {
					sieve[j] = true;
				}
		}
	}
	for (int i = 2; i <= 1000002; i++)
		if (!sieve[i])
			prime[count++] = i;
	int t;
	scanf("%d", &t);
	while (t--) {
		LL in1, ans = 1;
		scanf("%lld", &in1);
		LL temp = in1;
		for (int i = 0; i < count; i++) {
			if (temp%prime[i] == 0) {
				LL t1 = prime[i], t2 = t1;
				while (temp%prime[i] == 0) {
					temp /= prime[i];
					t1 *= prime[i];
				}
				ans *= (t1 - 1) / (t2 - 1);
			}
			if (ans > 2 * in1)
				break;
		}
		if (temp != 1)
			ans *= temp + 1;
		if (in1 * 2 == ans) {
			cout << "perfect" << endl;
		}
		else if (in1 * 2 > ans) {
			cout << "deficient" << endl;
		}
		else if (in1 * 2 < ans) {
			cout << "abundant" << endl;
		}
	}
}
