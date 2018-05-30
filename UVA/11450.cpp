#include<iostream>
#include<stdio.h>
using namespace std;
int dollar, many;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int check[25][205] = {}, dp[25][205] = {}, sum, how[25] = {};
		cin >> dollar >> many;
		for (int i = 0; i < many; i++) {
			cin >> sum;
			how[i] = sum;
			for (int j = 0; j < sum; j++)
				cin >> dp[i][j];
		}
		check[0][dollar] = 1;
		for (int i = 1; i <= many; i++)
			for (int j = 0; j < how[i - 1]; j++)
				for (int k = dollar; k >= 0; k--)
					if (check[i - 1][k])
						check[i][k - dp[i - 1][j]] = 1;
		bool output = false;
		for (int i = 0; i <= dollar; i++)
			if (check[many][i]) {
				printf("%d\n", dollar - i);
				output = true;
				break;
			}
		if (!output)
			printf("no solution\n");
	}
}