#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;

bool sieve[66000] = {};
int prime[10000] = {};

int main()
{
	int count = 0;
	sieve[0] = sieve[1] = true;
	for (int i = 2; i <= sqrt(66000); i++) {
		if (!sieve[i]) {
			for (int k = (66000 - 1) / i, j = i*k; k >= i; k--, j -= i)
				if (!sieve[k]) {
					sieve[j] = true;
				}
		}
	}
	for (int i = 2; i <= 66000; i++)
		if (!sieve[i])
			prime[count++] = i;
	int in1;
	while (scanf("%d", &in1) == 1) {
		bool check = true;
		if (in1 == 2) {
			printf("質數\n");
			continue;
		}
		for (int i = 0; i < count; i++) {
			if (in1%prime[i] == 0) {
				check = false;
				break;
			}
			if (double(sqrt(in1)) < double(prime[i])) {
				break;
			}
		}
		if (check)
			printf("質數\n");
		else
			printf("非質數\n");
	}
}
