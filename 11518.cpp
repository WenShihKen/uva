#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>dominos[10003];
bool check_visit[10003] = {};
int collapse = 0;

void pushdown(int push) {
	collapse++;
	check_visit[push] = true;

	for (int i = 0; i != dominos[push].size(); i++) {
		if (check_visit[dominos[push][i]] == false) {
			pushdown(dominos[push][i]);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, m, l;
		collapse = 0;
		cin >> n >> m >> l;
		for (int i = 0; i != 10003; i++) {
			dominos[i].clear();
			check_visit[i] = false;
		}
		for (int i = 0; i < m; i++) {
			int in1, in2;
			cin >> in1 >> in2;
			dominos[in1].push_back(in2);
		}
		for (int i = 0; i < l; i++) {
			int hand;
			cin >> hand;
			if (check_visit[hand] == false) {
				pushdown(hand);
			}
		}
		cout << collapse << endl;
	}
}
