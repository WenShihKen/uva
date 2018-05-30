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
	string in1;
	while (getline(cin, in1)) {
		stringstream temp;
		vector<string>number, operation;
		temp.str(in1);
		while (temp) {
			string t;
			temp >> t;
			if (t[0] == '1' || t[0] == '0') {
				number.push_back(t);
			}
			else if (t[0] == 'a' || t[0] == 'o') {
				operation.push_back(t);
			}
		}
		string answer = number[0];
		for (int i = 1; i != number.size(); i++) {
			for (int j = 0; j != answer.length(); j++) {
				int temp1 = answer[j] - '0', temp2 = number[i][j] - '0';
				if (operation[i - 1] == "or") {
					temp1 |= temp2;
				}
				else {
					temp1 &= temp2;
				}
				answer[j] = temp1 + '0';
			}
		}
		cout << number[0];
		for (int i = 0; i != operation.size(); i++) {
			if(operation[i]=="or")
				cout << "||" << number[i + 1];
			else
				cout << "&&" << number[i + 1];
		}
		printf(" = ");
		cout << answer << endl;
	}
}
