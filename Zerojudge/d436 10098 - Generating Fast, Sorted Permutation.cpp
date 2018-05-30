#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
typedef long long int LL;

int main()
{
	int in1;
	while (cin >> in1) {
		string input;
		for (int i = 0; i < in1; i++) {		
			cin >> input;
			sort(input.begin(), input.end());
			do {
				cout << input << endl;
			} while (next_permutation(input.begin(), input.end()));
			cout << endl;
		}
	}
}
