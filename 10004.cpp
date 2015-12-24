#include<iostream>
#include<vector>
using namespace std;

int check[203], color[203];
int able;
vector<int>all_point[203];

void DFS(int current) {
	check[current] = 1;
	for (int i = 0; i < all_point[current].size(); i++) {
		int nextNode = all_point[current][i];
		if (color[nextNode] == 0) {
			color[nextNode] = 0 - color[current];
		}
		if (color[current] == color[nextNode]) {
			able++;
		}
		if (check[nextNode] == 0) {
			DFS(nextNode);
		}
	}
}
int main()
{
	int n, l;
	while (cin >> n) {
		int x, y;
		if (n == 0)
			break;
		fill(check, check + 202, 0);
		fill(color, color + 202, 0);
		for (int i = 0; i < 202; i++)
			all_point[i].clear();
		cin >> l;
		for (int i = 0; i < l; i++) {
			cin >> x >> y;
			all_point[x].push_back(y);
			all_point[y].push_back(x);
		}
		able = 0;
		color[0] = 1;
		DFS(0);

		if (!able){
			cout << "BICOLORABLE.\n";
		}
		else{
			cout << "NOT BICOLORABLE.\n";
		}
	}
	return 0;
}