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
	int in1, in2;
	while (cin >> in1 >> in2) {
		if (in1 == 0 && in2 == 0)
			break;
		vector<int>all;
		int ans = 0;
		bool flag = false;
		for (int i = 2;; i++) {
			all.clear();
			for (int j = 0; j < in1 - 1; j++) {
				all.push_back(j + 2);
			}
			int now = 0;
			while (all.size() != 1) {
				for (int j = now, count = 0; ; count++, j++, j %= all.size()) {
					if (count == i - 1) {
						now = j;
						break;
					}
				}
				if (all[now] == in2) {
					break;
				}
				//cout << now << "   " << all[now] << endl;
				all.erase(all.begin() + now);
			}
			if (all.size()==1&&all[0] == in2) {
				flag = true;
				ans = i;
			}
			if (flag)
				break;
		}
		cout << ans << endl;
	}
}
