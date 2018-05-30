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
	int x[3] = {}, y[3] = {};
	while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2]) {
		bool find = false;
		for (int i = 0; i <= 200; i++) {
			for (int j = 0; j <= 200; j++) {
				int dis[2] = {};
				dis[0] = abs(i - x[0])*abs(i - x[0]) + abs(j - y[0])*abs(j - y[0]);
				dis[1] = abs(i - x[1])*abs(i - x[1]) + abs(j - y[1])*abs(j - y[1]);
				dis[2] = abs(i - x[2])*abs(i - x[2]) + abs(j - y[2])*abs(j - y[2]);
				sort(dis, dis + 3);
				if (dis[0] * 2 == dis[2] && dis[1] * 2 == dis[2]) {
					cout << i << " " << j << endl;
					find = true;
					break;
				}
			}
			if (find)
				break;
		}
	}
}
