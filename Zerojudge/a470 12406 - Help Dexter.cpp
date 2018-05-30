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
vector<vector<long long int>>temp;
int in1, in2;

void dfs(int index, long long int num) {
	if (index == in1 + 1) {
		return;
	}
	if (index > 0) {
		if (num % (1 << in2) == 0)
			temp[index].push_back(num);
	}
	dfs(index + 1, num * 10 + 1);
	dfs(index + 1, num * 10 + 2);
}

int main()
{
	int t, count = 0;
	cin >> t;
	while (t--) {
		temp.clear();
		temp.resize(20);
		cin >> in1 >> in2;
		dfs(0, 0);
		if (temp[in1].size() == 0) {
			printf("Case %d: impossible\n", ++count);
		}
		else if (temp[in1].size() == 1) {
			printf("Case %d: %lld\n", ++count, temp[in1][0]);
		}
		else {
			printf("Case %d: %lld %lld\n", ++count, temp[in1][0], temp[in1][temp[in1].size() - 1]);
		}
	}
}
