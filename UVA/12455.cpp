#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int time;
	cin >> time;
	while (time--) {
		bool check[1005];
		fill(check, check + 1001, false);
		check[0] = true;
		int many, len;
		cin >> len >> many;
		for (int i = 0; i < many; i++) {
			int bat;
			cin >> bat;
			for (int j = len - bat; j >= 0; j--) {
				if (check[j] && !check[j + bat]) {
					check[j + bat] = true;
				}
			}
		}
		if (check[len])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}