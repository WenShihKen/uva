#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int prime[10000] = {}, count = 2;
	prime[0] = 2, prime[1] = 3;
	for (int i = 5; i <= 30000; i += 2) {
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
	int in1;
	while (scanf("%d", &in1) != EOF) {
		map<int, int>prime_map;
		for (int i = in1; i > 1; i--) {
			int temp = i;
			for (int j = 0;; j++) {
				bool out = false;
				while (temp%prime[j] == 0) {
					prime_map[prime[j]] ++;
					temp /= prime[j];
				}
				if (temp == 1 || temp < prime[j])
					break;
			}
		}
		printf("%d!=", in1);
		for (map<int, int>::iterator it = prime_map.begin(); it != prime_map.end(); ++it)
			cout << it->second << " ";
		printf("\n");
	}
}
