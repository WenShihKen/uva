#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	int in1;
	while (cin >> in1) {
		if (in1 == 0) {
			cout << 0 << endl;
			continue;
		}
		int ans = 0;
		for (int i = 0; i < in1; i++) {
			int t;
			cin >> t;
			ans += t;
		}
		if (in1 % 2) {
			cout << ans / in1 + (ans%in1 > in1 / 2) << endl;
		}
		else {
			cout << ans / in1 + (ans%in1 >= in1 / 2) << endl;
		}
	}
}
