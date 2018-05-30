#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;

struct d092 {
	char c;
	int in;
};

bool cmp(d092 a, d092 b) {
	if (a.in == b.in) {
		return a.c > b.c;
	}
	return a.in > b.in;
}

int main() {

	int in1;
	while (cin >> in1&&in1 != 0) {
		vector<d092>all;
		all.clear();
		while (in1--) {
			int a, b;
			cin >> a;
			cin >> b;
			if (a > b) {
				d092 temp;
				temp.c = '>';
				temp.in = a + b;
				all.push_back(temp);
			}
			else if (a == b) {
				d092 temp;
				temp.c = '=';
				temp.in = a + b;
				all.push_back(temp);
			}
			else {
				d092 temp;
				temp.c = '<';
				temp.in = a + b;
				all.push_back(temp);
			}
		}
		sort(all.begin(), all.end(), cmp);
		for (int i = 0; i != all.size(); i++) {
			cout << all[i].c << all[i].in;
			if (i < all.size() - 1)
				printf(" ");
		}
		cout << endl;
	}
}
