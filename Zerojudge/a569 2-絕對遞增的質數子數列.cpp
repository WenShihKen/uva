#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
#define max_value 10000005
bool sieve[max_value] = {};
int main() {
	sieve[0] = sieve[1] = true;
	for (int i = 2; i <= sqrt(max_value); i++) {
		if (!sieve[i]) {
			for (int k = (max_value - 1) / i, j = i*k; k >= i; k--, j -= i)
				if (!sieve[k]) {
					sieve[j] = true;
				}
		}
	}
	string in1;
	while (getline(cin, in1)) {
		stringstream ss;
		long long int ans = 0, temp = 0, t = 0;
		ss << in1;
		long long int now = 0;
		while (ss >> t) {
			if (!sieve[t]) {
				if (now < t) {
					temp += t;
				}
				else {
					temp = t;
				}
				ans = max(temp, ans);
				now = t;
			}
			else {
				temp = 0;
				now = 0;
			}
		};
		printf("%lld\n", ans);
	}
}