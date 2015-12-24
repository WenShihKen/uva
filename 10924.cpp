#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	bool prime[1500] = {};
	fill(prime, prime + 1498, false);
	for (int i = 2; i <= 1498; i++) {
		if (prime[i] == false) {
			for (int j = i * 2; j <= 1498; j += i) {
				prime[j] = true;
			}
		}
	}
	string in1;
	while (cin >> in1) {
		int temp = 0;
		for (int i = 0; i < in1.length(); i++) {
			temp += int(in1[i] >= 'a' ? in1[i] - 'a' + 1 : in1[i] - 'A' + 27);
		}
		if (!prime[temp])
			printf("It is a prime word.\n");
		else
			printf("It is not a prime word.\n");
	}
}