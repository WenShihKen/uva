#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int prime[500] = {}, count = 2;
	prime[1] = 1, prime[2] = 2;
	for (int i = 3; i <= 1000; i += 2) {
		bool check = true;
		for (int j = 2; j < count; j++) {
			if (i%prime[j] == 0) {
				check = false;
				break;
			}
			if (double(sqrt(i)) < double(prime[j]))
				break;
		}
		if (check)
			prime[++count] = i;
	}
	int n, c;
	while (cin >> n >> c) {
		int k = 0;
		for (int i = 1; i <= count; i++) {
			if (prime[i] <= n)
				k++;
		}
		printf("%d %d: ", n, c);
		if (c * 2 >= k || c * 2 + 1 >= k) {
			for (int i = 1; i <= k; i++) {
				cout << prime[i] << " ";
			}
		}
		else if (k % 2 == 0) {
			for (int i = k / 2 - c + 1; i <= k / 2 + c; i++) {
				cout << prime[i] << " ";
			}
		}
		else if (k % 2) {
			for (int i = k / 2 - c + 2; i <= k / 2 + c; i++) {
				cout << prime[i] << " ";
			}
		}
		cout << endl << endl;
	}
}