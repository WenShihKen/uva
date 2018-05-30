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
	int in1, in2;
	while (cin >> in1 >> in2) {
		printf("%02d:%02d\n", (in1 * 60 + in2 + 150) % 1440 / 60, (in1 * 60 + in2 + 150) % 1440 % 60);
	}
}
