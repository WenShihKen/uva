#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct b973 {
	int cost_time = 0, team_number = 0;
};

bool cmp(b973 a, b973 b) {
	if (a.cost_time == b.cost_time)
		return a.team_number < b.team_number;
	return a.cost_time < b.cost_time;
}

int main()
{
	int stage, team;
	while (cin >> stage >> team) {
		vector<b973>cost(team);
		for (int i = 0; i < stage; i++) {
			for (int j = 0; j < team; j++) {
				char c;
				int a, b;
				cin >> a >> c >> b;
				cost[j].team_number = j;
				cost[j].cost_time += (a * 60 + b);
			}
		}
		sort(cost.begin(), cost.end(), cmp);
		for (int i = 0; i != cost.size(); i++) {
			cout << cost[i].team_number + 1 << " " << cost[i].cost_time << endl;
		}
	}
}
