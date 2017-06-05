#include <iostream>
#include <cmath>

using namespace std;
bool sieve[33000] = {};
int prime[10000] = {};
int main() {
	int count = 0;
	sieve[0] = sieve[1] = true;
	for (int i = 2; i <= sqrt(33000); i++) {
		if (!sieve[i]) {
			for (int k = (33000 - 1) / i, j = i*k; k >= i; k--, j -= i)
				if (!sieve[k]) {
					sieve[j] = true;
				}
		}
	}
	for (int i = 2; i <= 33000; i++)
		if (!sieve[i])
			prime[count++] = i;
	int t;
	while (scanf("%d", &t)) {
		int ans = 0;
		if (t == 0)
			break;
		for (int i = 2; i <= t/2; i++) {
			if (!sieve[i] && !sieve[t - i])
				ans++;
		}
		printf("%d\n", ans);
	}
}