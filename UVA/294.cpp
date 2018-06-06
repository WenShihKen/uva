#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
#define maxsqrt 32000
int main()
{
	int prime[10000] = {}, count = 0;
	for (int i = 2; i <= maxsqrt; i++) {
		bool check = true;
		for (int j = 2; j*j <= i; j += 1) {
			if (i%j == 0) {
				check = false;
				break;
			}
		}
		if (check)
			prime[count++] = i;
	}
	int in1;
	cin >> in1;
	while (in1--) {
		int n, m;
		cin >> n >> m;
		int max_divisors = 0, ans = 0;
		for (int i = n; i <= m; i++) {
			int divisors = 1;
			for (int j = 0; j < count; j++) {
				int temp = i, temp_count = 0;
				while (temp%prime[j] == 0) {
					temp_count++;
					temp /= prime[j];
					if (temp < prime[j]) {
						break;
					}
				}
				divisors *= (temp_count + 1);
			}
			if (max_divisors < divisors) {
				max_divisors = divisors;
				ans = i;
			}
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n", n, m, ans, max_divisors);
	}
}