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
		long long int ans = 0;
		for (int i = 1; i <= in1; i++) {
			int t;
			cin >> t;
			ans += (i*t);
		}
		cout << ans << endl;
	}
}
