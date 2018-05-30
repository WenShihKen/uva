#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int in1;
	while (cin >> in1) {
		bool win = true;
		int start = 1;
		while (start < in1) {
			if (win & 1)
				start *= 9;
			else
				start *= 2;
			win ^= 1;
		}

		if (!win)
			printf("Stan wins.\n");
		else
			printf("Ollie wins.\n");
	}
}