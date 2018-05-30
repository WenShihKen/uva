#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

typedef long long int LL;

int main() {
	int in1;
	cin >> in1;
	while (in1--) {
		int t, len[15] = {};
		cin >> t;
		char c[15] = {};
		for (int i = 0; i < t; i++) {
			cin >> c[i] >> len[i];
		}
		for (int i = 0; i < t; i++) {
			for (int j = i + 1; j < t; j++) {
				for (int k = j + 1; k < t; k++) {
					int sor[3] = {};
					sor[0] = len[i], sor[1] = len[j], sor[2] = len[k];
					sort(sor, sor + 3);
					if (sor[0] + sor[1] > sor[2]) {

						printf("%c %c %c\n", c[i], c[j], c[k]);
					}
				}
			}
		}
	}
}

/*
2
4
a 8
b 6
c 4
d 3

*/