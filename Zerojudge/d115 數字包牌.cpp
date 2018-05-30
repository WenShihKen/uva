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

int all[105] = {}, temp[105] = {};
int in1, in2;

void rec(int a, int b)
{
	if (a == in2) {
		for (int i = 0; i < in2; i++) {
			cout << temp[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = b; i < in1; i++) {
		temp[a] = all[i];
		rec(a + 1, ++b);
	}
}

int main()
{
	while (cin >> in1) {
		if (in1 == 0)
			break;
		for (int i = 0; i < in1; i++)
			cin >> all[i];
		sort(all, all + in1);
		cin >> in2;
		rec(0, 0);
		cout << endl;
	}
}
