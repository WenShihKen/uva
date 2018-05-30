#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
char temp[200][200] = {};
void dfs(int x, int y, int in1) {
	if (x < 0 || y < 0 || x == in1 || y == in1)
		return;
	if (temp[x][y] == '+')
		return;
	temp[x][y] = '+';
	dfs(x + 1, y,in1);
	dfs(x - 1, y,in1);
	dfs(x, y + 1,in1);
	dfs(x, y - 1,in1);
}

int main()
{
	int in1;
	while (cin >> in1) {
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in1; j++) {
				cin >> temp[i][j];
			}
		}
		int row, col;
		cin >> row >> col;
		dfs(row, col, in1);
		for (int i = 0; i < in1; i++) {
			for (int j = 0; j < in1; j++) {
				cout << temp[i][j];
			}
			cout << endl;
		}
	}
}
