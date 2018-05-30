#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

bool cmp(string a, string b) {
	return a + b > b + a;
}

int main()
{
	int in1;
	while (cin >> in1) {
		vector<string>temp;
		string s;
		for (int i = 0; i < in1; i++) {
			cin >> s;
			temp.push_back(s);
		}
		sort(temp.begin(), temp.end(), cmp);
		for (int i = 0; i != temp.size(); i++) {
			cout << temp[i];
		}
		cout << endl;
	}
}
