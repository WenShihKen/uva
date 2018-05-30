#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<vector>
using namespace std;
string in1;
int length;
vector<char>check;
bool temp[105];
void dfs()
{
	if (check.size() == length) {
		for (int i = 0; i < length; i++)
			cout << check[i];
		cout << endl;
	}
	for (int i = 0; i < in1.length(); i++) {
		if (check.size() > 0 && check[check.size() - 1]>in1[i])
			continue;
		if (temp[i] == false) {
			temp[i] = true;
			check.push_back(in1[i]);
			dfs();
			temp[i] = false;
			check.pop_back();
			while (in1[i] == in1[i + 1] && i + 1 < in1.length()) {
				i++;
			}
		}
	}
}
int main()
{
	while (cin >> in1 >> length) {
		sort(in1.begin(), in1.end());
		check.clear();
		fill(temp, temp + 105, 0);
		dfs();
	}
}