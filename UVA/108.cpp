#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int in1;
	while (cin >> in1) {
		int arr[103][103] = {}, test[103][103] = {};
		for (int i = 1; i <= in1; i++) {
			for (int j = 1; j <= in1; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 1; i <= in1; i++) {
			for (int j = 1; j <= in1; j++) {
				test[i][j] = test[i - 1][j] + arr[i][j];
			}
		}
		int ans = -9999999;
		for (int i = 1; i <= in1; i++) {
			for (int j = i; j <= in1; j++) {
				int temp = 0;
				for (int k = 1; k <= in1; k++) {
					temp += (test[j][k] - test[i - 1][k]);
					ans = max(temp, ans);
					if (temp < 0)
						temp = 0;
				}
			}
		}
		cout << ans << endl;
	}
}