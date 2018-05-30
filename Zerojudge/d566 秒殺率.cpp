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
	int in1;
	while (cin >> in1) {
		string user, status;
		map<string, bool>ac;
		vector<string>temp1, temp2;
		for (int i = 0; i < in1; i++) {
			cin >> user >> status;
			temp1.push_back(user);
			temp2.push_back(status);
		}
		int ac_people = 0, ac_first = 0;
		for (int i = temp1.size() - 1; i >= 0; i--) {
			map<string, bool>::iterator iter = ac.find(temp1[i]);
			if (iter != ac.end()) {
				if (temp2[i] == "AC") {
					if (ac[temp1[i]] == false) {
						ac[temp1[i]] = true;
						ac_people++;
					}
				}
			}
			else {
				if (temp2[i] == "AC") {
					ac[temp1[i]] = true;
					ac_people++, ac_first++;
				}
				else {
					ac[temp1[i]] = false;
				}
			}
		}
		printf("%d%%\n", ac_first * 100 / ac_people);
	}
}
