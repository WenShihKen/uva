#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int in1;
	while (cin >> in1) {
		for (long long int i = 2; i*i <= in1; i++) {
			if (in1%i == 0) {
				cout << in1 / i << endl;
				break;
			}
		}
	}
}