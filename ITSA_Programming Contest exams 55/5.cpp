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

vector<int>gra[1000], wei[1000];
int ans = 0;
typedef long long int LL;

void dfs(int s, int value) {
	if (s == 200) {//terminal
		ans = max(value, ans);
		return;
	}
	for (int i = 0; i != gra[s].size(); i++) {
		dfs(gra[s][i], value + wei[s][i]);
	}
}

int main() {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string t;
		cin >> t;
		for (int i = 0; i < 999; i++) {
			gra[i].clear();
			wei[i].clear();
		}
		ans = 0;
		if (t == "case") {
			while (1) {
				string in1, in2;
				int w;
				cin >> in1;
				if (in1 == "end") {
					dfs(0, 0);
					break;
				}
				cin >> in2 >> w;
				int p1 = 0, p2 = 0;
				if (in1 == "initial") {
					p1 = 0;
				}
				else {
					for (int i = 1; i < in1.length(); i++)
						p1 = p1 * 10 + (in1[i] - 48);
				}
				if (in2 == "terminal") {
					p2 = 200;
				}
				else {
					for (int i = 1; i < in2.length(); i++)
						p2 = p2 * 10 + (in2[i] - 48);
				}
				gra[p1].push_back(p2);
				wei[p1].push_back(w);
			}
		}
		cout << ans << endl;
	}
}
/*
2
case
initial P2 2
initial P3 5
initial P4 3
P2 P5 6
P5 P6 3
P3 P6 5
P3 P7 3
P4 P7 6
P7 P6 4
P6 terminal 5
end
case
initial P1 2
initial P2 3
P1 P3 7
P1 P4 5
P2 P4 2
P3 terminal 6
P4 terminal 10
end
*/