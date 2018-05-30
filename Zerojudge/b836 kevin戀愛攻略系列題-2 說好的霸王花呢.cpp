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
typedef unsigned long long int LL;
LL temp[65500] = {};
int main()
{
	LL in1, in2;
	temp[1] = 1;
	for (int i = 2; i <= 65500; i++)
		temp[i] = i + temp[i - 1];
	while (cin >> in1 >> in2) {
		bool find = false;
		//cout << temp[in1] << endl;
		if (in1 == 0) {
			cout << "Go Kevin!!" << endl;
			continue;
		}
		else if (in1 != 0 && in2 == 0) {
			cout << "Go Kevin!!" << endl;
			continue;
		}
		for (int i = 1; i <= 65500; i++) {
			if (i + temp[i - 1] * in2 == in1) {
				find ^= 1;
				break;
			}
			else if (i + temp[i - 1] * in2 > in1) {
				break;
			}
		}
		if (find)
			cout << "Go Kevin!!" << endl;
		else
			cout << "No Stop!!" << endl;
	}
}
