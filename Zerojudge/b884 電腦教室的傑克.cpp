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
	int t;
	cin >> t;
	while (t--) {
		int in1, in2;
		cin >> in1 >> in2;
		int ans = 100 - (abs(in1) + abs(in2));
		if (ans > 0 && ans <= 30) {
			cout << "sad!" << endl;
		}
		else if (ans > 30 && ans <= 60) {
			cout << "hmm~~" << endl;
		}
		else if (ans > 60 && ans < 100) {
			cout << "Happyyummy" << endl;
		}
		else {
			cout << "evil!!" << endl;
		}
	}
}
