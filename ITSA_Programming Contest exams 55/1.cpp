#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string temp[1005];
		int counter = 0;
		string temp_s;
		stringstream ss;
		string word;
		getline(cin, temp_s);
		ss << temp_s;
		int c = 0;
		while (ss >> word) {
			int check = 0;
			int len = word.size();
			for (int k = 0; k < len; k++) {
				if (word[k] > 64 && word[k] < 91)
					word[k] += 32;
			}
			for (int i = 0; i < c; i++) {
				if (word == temp[i])
					check = 1;
			}
			if (check != 1) {
				temp[counter] = word;
				counter++;
				c++;
			}
		}
		for (int i = 0; i < c; i++) {
			if (i != c - 1)
				cout << temp[i] << " ";
			else
				cout << temp[i] << endl;
		}
		counter = 0;
	}
}