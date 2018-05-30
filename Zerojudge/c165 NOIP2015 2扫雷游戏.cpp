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
	int in1, in2;
	while (cin >> in1 >> in2) {
		char mine[105][105] = {};
		for (int i = 0; i < in1; i++)
			for (int j = 0; j < in2; j++)
				cin >> mine[i][j];
		char sweeper[105][105] = {};
		int x[8] = { -1,0,1,-1,1,-1,0,1 };
		int y[8] = { -1,-1,-1,0,0,1,1,1 };
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in2; j++) {
				if (mine[i][j] == '*')
					continue;
				else
					sweeper[i][j] = '0';
				for (int k = 0; k < 8; k++) {
					if (i + x[k] >= 0 && i + x[k] < in1&&j + y[k] >= 0 && j + y[k] < in2&&mine[i + x[k]][j+y[k]]=='*') {
						sweeper[i][j]++;
					}
				}
			}
		}
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in2; j++) {
				if (mine[i][j] == '*')
					cout << "*";
				else
					cout << sweeper[i][j];
			}
			cout << endl;
		}
	}
}
