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
		int h1, m1, h2, m2, give;
		cin >> h1 >> m1 >> h2 >> m2 >> give;
		if ((h2 * 60 + m2) - (h1 * 60 + m1) >= give)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
