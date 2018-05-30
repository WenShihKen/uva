#include<iostream>
using namespace std;
int main()
{
	int all[505];
	fill(all, all + 502, 0);
	all[1] = 1;
	for (int i = 2; i <= 500; i++) {
		all[i] += (all[i - 1] + i - 1);
	}
	int f;
	while (cin >> f) {
		cout << all[f] << endl;
	}
}
