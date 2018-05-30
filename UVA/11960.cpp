#include<stdio.h>
#include<iostream>
using namespace std;
int prime[1000005] = {}, max1[1000005] = {};
int main()
{
	fill(prime, prime + 1000003, 1);
	fill(max1, max1 + 1000003, 0);
	for (int i = 2; i <= 500000; i++) {
		for (int j = i * 2; j <= 1000000; j += i) {
			++prime[j];
		}
	}
	max1[1] = 1;
	for (int i = 2; i <= 1000000; i++) {
		if (prime[i] >= prime[max1[i - 1]])
			max1[i] = i;
		else
			max1[i] = max1[i - 1];
	}
	int t;
	cin >> t;
	while (t--) {
		int find;
		cin >> find;
		cout << max1[find] << endl;
	}
}
