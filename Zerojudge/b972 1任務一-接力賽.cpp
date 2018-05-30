#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int stage, team;
	while (cin >> stage >> team) {
		vector<int>cost(team);
		for (int i = 0; i < stage; i++) {
			for (int j = 0; j < team; j++) {
				char c;
				int a, b;
				cin >> a >> c >> b;
				cost[j] += (a * 60 + b);
			}
		}
		sort(cost.begin(), cost.end());
		for (int i = 0; i != cost.size(); i++)
			cout << cost[i] << endl;
	}
}
