#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
#include <cstdlib> 
#include <cstdio>
#include <stdlib.h> 
using namespace std;

int main() {
	int in1;
	while (cin >> in1) {
		int temp1[23] = {}, ans[23] = {};
		for (int i = 1; i <= in1; i++)
			cin >> temp1[i];
		for (int i = 1; i <= in1; i++)
			ans[temp1[i]] = i;

		int temp2[23] = {}, in2[23] = {};
		while (cin >> temp2[1]) {
			for (int i = 2; i <= in1; i++)
				cin >> temp2[i];
			for (int i = 1; i <= in1; i++)
				in2[temp2[i]] = i;
			int dp[23][23] = {};
			for (int i = 1; i <= in1; i++) {
				for (int j = 1; j <= in1; j++) {
					if (ans[i] == in2[j]) {
						dp[i][j] = dp[i - 1][j - 1] + 1;
					}
					else {
						dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
					}
				}
			}
			cout << dp[in1][in1] << endl;
		}
	}
}