#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;
int lcs[1003][1003] = {};
int main()
{
	string in1, in2;
	while (getline(cin, in1)) {
		getline(cin, in2);
		for (int i = 0; i < 1002; i++)
			for (int j = 0; j < 1002; j++)
				lcs[i][j] = 0;
		for (int i = 0; i < in1.length(); i++) {
			for (int j = 0; j < in2.length(); j++) {
				if (in1[i] == in2[j]) {
					lcs[i + 1][j + 1] = lcs[i][j] + 1;
				}
				else
					lcs[i + 1][j + 1] = max(lcs[i + 1][j], lcs[i][j + 1]);
			}
		}

		cout << lcs[in1.length()][in2.length()] << endl;
	}
}
