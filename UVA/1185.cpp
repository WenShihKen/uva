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
	int t;
	cin >> t;
	while (t--) {
		int in1, ans = 0;
		cin >> in1;
		double temp = 0.0;
		for (int i = 1; i <= in1; i++) {
			temp += log10(i);
		}
		ans = floor(temp) + 1;
		cout << ans << endl;
	}
}