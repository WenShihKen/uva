#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int all[2005] = {}, in1, length[4005] = {}, ans = 0;
		int temp[4005] = {};
		fill(length, length + 4003, 1);
		cin >> in1;
		for (int i = 0; i < in1; i++)
			cin >> all[i];
		for (int i = in1 - 1, j = 0; i >= 0; i--, j++)
			temp[j] = all[i];
		for (int i = 0, j = in1; i < in1; i++, j++)
			temp[j] = all[i];
		for (int i = 0; i < in1 * 2; i++) {
			for (int j = i + 1; j < in1 * 2; j++) {
				if (temp[i] < temp[j]) {
					length[j] = max(length[j], length[i] + 1);
				}
			}
		}
		/*for (int i = 0; i < in1 * 2; i++)
			cout << temp[i];
		cout << endl;*/
		for (int i = 0; i < in1 * 2; i++)
			ans = max(ans, length[i]);
		cout << ans << endl;
	}
}