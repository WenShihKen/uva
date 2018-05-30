#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int n, m;
int store[10005][205] = {}, ans[10005] = {};

bool cmp(int a, int b) {
	for (int i = 0; i < m; i++) {
		if (store[a][i] < store[b][i]) {
			return true;
		}
		else if (store[a][i] > store[b][i]) {
			return false;
		}
	}
	return false;
}

int main()
{
	while (cin >> n >> m) {
		for (int i = 0; i < n; i++) {
			ans[i] = i;
			for (int j = 0; j < m; j++) {
				cin >> store[i][j];
			}
		}
		sort(ans, ans + n, cmp);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << store[ans[i]][j] << " ";
			}
			cout << endl;
		}
	}
}
