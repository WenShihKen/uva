#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int round;
	cin >> round;
	while (round--) {
		int in1, dis[25], ans = 0;
		cin >> in1;
		for (int i = 0; i < in1; i++)
			cin >> dis[i];
		sort(dis, dis + in1);
		for (int i = 1; i < in1; i++)
			ans += (dis[i] - dis[i - 1]);
		cout << ans * 2 << endl;
	}
	return 0;
}