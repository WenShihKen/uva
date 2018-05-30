#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<string.h>
#include<map>
using namespace std;

int main() {
	string in1;
	while (getline(cin, in1)) {
		map<string, string>dic;
		if (in1 == "[L3X1K0N]") {
			while (1) {
				string t;
				getline(cin, t);
				if (t == "[1337]")
					break;
				string t1, t2;
				int c = 0;
				for (c = 0; t[c] != ':'; c++)
					t1 += t[c];
				for (int i = c + 1; i != t.length(); i++)
					t2 += t[i];
				dic[t1] = t2;
			}
		}
		while (1) {
			getline(cin, in1);
			if (in1 == "[3ND]")
				break;
			string temp;
			stringstream ss;
			ss << in1;
			while (ss >> temp) {
				if (dic[temp] == "") {
					cout << temp << " ";
				}
				else {
					cout << dic[temp] << " ";
				}
			}
			cout << endl;
		}
	}
}
