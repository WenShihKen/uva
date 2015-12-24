#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, d, r;
	while (cin >> n >> d >> r) {
		if (n == 0 && d == 0 && r == 0)
			break;
		int early[105], night[105], sum = 0;
		for (int i = 0; i < n; i++)
			cin >> early[i];
		for (int i = 0; i < n; i++)
			cin >> night[i];
		sort(early, early + n);
		sort(night, night + n);
		for (int i = 0; i < n; i++) {
			int temp = early[n - i - 1] + night[i];
			if (temp > d) {
				sum += ((temp - d)*r);
			}
		}
		cout << sum << endl;
	}
}