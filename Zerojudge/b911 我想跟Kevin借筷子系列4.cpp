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
typedef unsigned long long int LL;

int main()
{
	vector<LL>number;
	number.push_back(1);
	for (int i = 1; i<63; i++) {
		if ((number[i - 1] * 2 + 1) > ULLONG_MAX)
			break;
		number.push_back(number[i - 1] * 2 + 1);
	}
	LL in1;
	while (cin >> in1) {
		if (in1 == 0) {
			cout << 0 << endl;
			continue;
		}
		else if (in1 == 1) {
			cout << 1 << endl;
			continue;
		}
		LL ans = 0;
		for (int i = 0; i != number.size(); i++) {
			if (in1 > number[i]) {
				ans = i + 2;			
			}
		}
		cout << ans << endl;
	}
}
