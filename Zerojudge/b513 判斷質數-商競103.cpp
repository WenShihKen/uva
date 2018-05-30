#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int prime[10000] = {}, count = 2;
	prime[0] = 2, prime[1] = 3;
	for (int i = 5; i <= 65537; i += 2) {
		bool check = true;
		for (int j = 0; j < count; j++) {
			if (i%prime[j] == 0) {
				check = false;
				break;
			}
			if (double(sqrt(i)) < double(prime[j]))
				break;
		}
		if (check)
			prime[count++] = i;
	}
	int t,in1;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &in1);
		bool check = true;
		if (in1 == 2) {
			printf("Y\n");
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
			printf("Y\n");
		else
			printf("N\n");
	}
}
