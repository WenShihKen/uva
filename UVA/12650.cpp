#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n, r;
	while (cin >> n >> r) {
		bool in1[10005];
		int t;
		fill(in1, in1 + 10004, false);
		for (int i = 0; i < r; i++) {
			cin >> t;
			in1[t] = true;
		}
		if (n == r) {
			printf("*\n"); continue;
		}
		for (int i = 1; i <= n; i++) {
			if (!in1[i]) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}