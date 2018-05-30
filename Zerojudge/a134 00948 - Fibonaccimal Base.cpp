#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int all[55];
	all[0] = 1;
	all[1] = 1;
	for (int i = 2; i <= 50; i++) {
		all[i] = all[i - 1] + all[i - 2];
	}
	int t;
	cin >> t;
	while (t--) {
		int find, i;
		cin >> find;
		printf("%d = ", find);
		for (i = 1; all[i] < find; i++);
		int count = i;
		while (count >= 1) {
			//printf("%d \n", find);
			if (find >= all[count]) {
				printf("1");
				find -= all[count];
			}
			else {
				if (count < i)
					printf("0");
			}
			--count;
		}
		printf(" (fib)\n");
	}
}
