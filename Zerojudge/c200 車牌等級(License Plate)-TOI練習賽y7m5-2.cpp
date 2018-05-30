#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
using namespace std;

typedef long long int LL;

int main() {
	int in1;
	cin >> in1;
	getchar();
	while (in1--) {
		string t;
		int ans = 0;
		getline(cin, t);
		reverse(t.begin(), t.end());
		for (int i = 0; i != t.length(); i++){
			if (t[i] >= '0'&&t[i] <= '9') {
				int temp = t[i] - '0';
				for (int j = 0; j < i; j++) {
					temp *= 36;
					temp %= 1688;
				}
				ans += temp;
			}
			else {
				int temp = t[i] - 'A'+10;
				for (int j = 0; j < i; j++) {
					temp *= 36;
					temp %= 1688;
				}
				ans += temp;
			}
			ans %= 1688;
		}
		cout << ans + 1 << endl;
	}
}
