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
	int in1;
	while (cin >> in1) {
		stack<int>temp;
		int operating;
		for (int i = 0; i < in1; i++) {
			cin >> operating;
			if (operating == 1) {
				temp.pop();
			}
			else if (operating == 2) {
				cout << temp.top() << endl;
			}
			else if (operating == 3) {
				int insert;
				cin >> insert;
				temp.push(insert);
			}
		}
	}
}
