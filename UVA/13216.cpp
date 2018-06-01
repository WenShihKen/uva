#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int in1;
	cin >> in1;
	getchar();
	while (in1--) {
		string in2;
		getline(cin, in2);
		if (in2 == "0") {
			printf("1\n");
		}
		else if (in2 == "1") {
			printf("66\n");
		}
		else {
			int ans[5] = { 56,96,36,76,16 };
			int temp = (in2[in2.length() - 1] - '2') >= '0' ? (in2[in2.length() - 1] - '2') : (in2[in2.length() - 1] - '2') + 10;
			cout << ans[temp % 5] << endl;
		}
	}
}