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
	int in1;
	while (cin >> in1) {
		getchar();
		vector<string>all;
		string in2;
		for (int i = 0; i < in1; i++) {
			getline(cin, in2);
			all.push_back(in2);
		}
		sort(all.begin(), all.end());
		for (int i = 0; i != all.size(); i++) {
			cout << all[i] << endl;
		}
	}
}
