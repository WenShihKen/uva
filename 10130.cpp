#include<iostream>
#include<algorithm>

using namespace std;

int T, N, G, MW;
int price[1005], weight[1005];
int dp[35];

int bag()
{
	if (dp[MW]) return dp[MW];
	int dp[35] = { 0 };
	for (int i = 0; i < N; ++i) {
		for (int j = MW; j - weight[i] >= 0; --j) {
			dp[j] = max(dp[j], dp[j - weight[i]] + price[i]);
		}
	}
	return dp[MW];
}

int main()
{
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; ++i)
			cin >> price[i] >> weight[i];
		cin >> G;

		fill(begin(dp), end(dp), 0);
		MW = 30;
		bag();

		int result = 0;
		while (G--) {
			cin >> MW;
			result += bag();
		}
		printf("%d\n", result);
	}
}