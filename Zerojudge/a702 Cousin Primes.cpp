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
bool sieve[18466800];
int counter = 0;
struct {
	int x, y;
}prime[100005];
typedef long long int LL;

void run() {
	sieve[0] = sieve[1] = true;
	for (int i = 2; i <= sqrt(18466800); i++) {
		if (!sieve[i]) {
			for (int k = (18466800 - 1) / i, j = i*k; k >= i; k--, j -= i)
				if (!sieve[k]) {
					sieve[j] = true;
				}
		}
	}
	for (int i = 2; i <= 18466800; i++)
		if (!sieve[i] && !sieve[i + 4]) {
			prime[counter].x = i;
			prime[counter].y = i + 4;
			counter++;
		}
}

int main() {	
	run();
	int in1;
	while (scanf("%d", &in1) != EOF) {
		printf("(%d, %d)\n", prime[in1 - 1].x, prime[in1 - 1].y);
	}
}
