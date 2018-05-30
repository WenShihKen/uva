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
LL t[10] = {}, in1, temp[10] = {};
LL rec_gcd();
LL gcd(LL a, LL b);

LL rec_gcd() {
	for (int i = 0; i < in1; i++) {
		temp[i] = gcd(t[i], t[i + 1]);
	}
	return temp[in1 - 2];
}

LL gcd(LL a, LL b) {
	if (a == 0) {
		return b;
	}
	else {
		return gcd(b%a, a);
	}
}

int main() {
	while (cin >> in1) {
		LL ans = -99999;
		for (int i = 0; i < in1; i++)
			cin >> t[i];	
		cout << rec_gcd() << endl;
	}
}
