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

string check_max(string a, string b) {
	if (a.length() > b.length())
		return a;
	else if (a.length() < b.length())
		return b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] < b[i])
			return b;
		else if (a[i]>b[i])
			return a;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string in1, in2, in3;
		cin >> in1 >> in2 >> in3;
		string ans;
		ans = check_max(in1, in2);
		ans = check_max(ans, in3);
		cout << ans << endl;
	}
}
