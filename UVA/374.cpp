#include<iostream>
#include<stdio.h>
using namespace std;

long long int mod_374(long long int b, long long int p, long long int m) {
	if (p == 0)
		return 1;
	else if (p == 1)
		return b%m;

	long long int temp = mod_374(b, p / 2, m);

	if (p % 2 == 1) 
		return temp*temp*b%m;
	else 
		return temp*temp%m;
}

int main()
{
	long long int b, p, m;
	while (cin >> b >> p >> m) {
		cout << mod_374(b, p, m) << endl;
		/*long long int temp = b;
		for (int i = 0; i < p - 1; i++) {
			temp *= b;
			temp %= m;
		}
		cout << temp << endl;*/
	}
}