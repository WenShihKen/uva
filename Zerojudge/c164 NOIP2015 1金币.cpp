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

int main()
{
	int in1, coin[200] = {};
	coin[1] = 1;
	for (int i = 2; i <= 150; i++)
		coin[i] = coin[i - 1] + i;
	while (cin >> in1) {
		long long int ans = 0, start = 1;
		for (int i = 1; i <= 150; i++) {
			while (start <= coin[i]) {
				ans += i;
				++start;
				if (start > in1)
					break;
			}
			if (start > in1)
				break;
		}
		cout << ans << endl;
	}
}
