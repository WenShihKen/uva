#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int in1, in2, count = 1;
	while (cin >> in1 >> in2&&in1 != 0 && in2 != 0) {
		int t1[105] = {}, t2[105] = {};
		for (int i = 1; i <= in1; i++) {
			cin >> t1[i];
		}
		for (int i = 1; i <= in2; i++) {
			cin >> t2[i];
		}
		int lcs[105][105] = {};
		for (int i = 1; i <= in1; i++) {
			for (int j = 1; j <= in2; j++) {
				if (t1[i] == t2[j]) {
					lcs[i][j] = lcs[i-1][j-1] + 1;
				}
				else {
					lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
				}
			}
		}
		printf("Twin Towers #%d\n", count++);
		printf("Number of Tiles : %d\n\n", lcs[in1][in2]);
	}
}