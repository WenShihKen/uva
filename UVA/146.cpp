#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//next_permutation是神器
int main()
{
	string in1;
	while (getline(cin, in1)) {
		if (in1 == "#")
			break;
		int check = 0;
		for (int i = in1.length() - 1; i > 0; i--) {
			if (in1[i] > in1[i - 1]) {
				check = i;//change place
				break;
			}
		}
		if (check == 0) {
			printf("No Successor\n");
			continue;
		}
		for (int i = in1.length() - 1; i >= check; i--) {
			if (in1[i] > in1[check - 1]) {
				in1[i] ^= in1[check - 1] ^= in1[i] ^= in1[check - 1];
				break;
			}
		}
		sort(in1.begin() + check, in1.end());

		cout << in1 << endl;
	}
}