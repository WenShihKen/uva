#include<iostream>
#include<stdio.h>
using namespace std;

bool record[1000005] = {};

int main()
{
	fill(record, record + 1000003, false);
	for (int i = 2; i <= 1000000; i++) {
		if (!record[i]) {
			for (int j = i + i; j <= 1000000; j += i) {
				record[j] = true;
			}
		}
	}
	int prime;
	while (cin >> prime) {
		if (prime == 0)
			break;
		int temp1 = 0, temp2 = 0;
		bool flag = false;
		for (int i = 2; i <= prime; i++) {
			if (!record[i] && !record[prime - i]) {
				temp1 = i, temp2 = prime - i;
				flag = true; break;
			}
		}
		if (flag)
			printf("%d = %d + %d\n", prime, temp1, temp2);
		else
			printf("Goldbach's conjecture is wrong.\n");
	}
}
