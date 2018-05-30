#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int all[500] = {}, in1, ans = 0;
		cin >> in1;
		for (int i = 0; i < in1; i++)
			cin >> all[i];
		sort(all, all + in1);
		for (int i = 0; i < in1; i++) {
			for (int j = i + 1; j < in1; j++) {
				for (int k = j + 1; k < in1; k++) {
					if (all[k] * all[k] == all[i] * all[i] + all[j] * all[j]) {
						++ans;
					}
				}
			}
		}
		cout << ans << endl;
	}
}
