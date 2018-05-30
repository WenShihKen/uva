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
	int a[3];
	while (cin >> a[0] >> a[1] >> a[2]) {
		sort(a, a + 3);
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
			cout << "right triangle" << endl;
		}else if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2]) {
			cout << "obtuse triangle" << endl;
		}else if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2]) {
			cout << "acute triangle" << endl;
		}
	}
}
