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
	vector<string>ans;
	ans.push_back("1");
	ans.push_back("11");
	for (int i = 2; i <= 40; i++) {
		string temp;
		for (int j = 0; j != ans[i - 1].length(); j++) {
			int t1 = 1, t2 = ans[i - 1][j] - '0';
			while (j + 1 != ans[i - 1].length()&&(ans[i - 1][j] == ans[i - 1][j + 1])) {
				j++;
				t1++;
			}
			stringstream ss;
			ss << t1;
			ss << t2;
			temp += ss.str();
		}
		ans.push_back(temp);
	}
	int in1;
	while (cin >> in1) {
		cout << ans[in1 - 1] << endl;
	}
}
