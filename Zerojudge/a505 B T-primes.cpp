#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

typedef long long int LL;

using namespace std;

bool prime[10000005] = {};

int main()
{
	prime[1] = true;
	for (int i = 2; i <= 10000003; i++) {
		if (!prime[i]) {
			for (int j = i << 1; j <= 10000003; j += i) {
				prime[j] = true;
			}
		}
	}
	LL in1;
	while (scanf("%lld", &in1) != EOF) {
		for (int i = 0; i < in1; i++) {
			LL input;
			scanf("%lld", &input);
			LL temp = sqrt(input);
			if (temp*temp == input&&prime[temp] == false) {
				puts("YES");
			}
			else {
				puts("NO");
			}
		}
	}
}
