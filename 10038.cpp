#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int in1;
	while (cin >> in1) {
		int temp[3005] = {}, check[3005] = {};
		bool flag = true;
		for (int i = 0; i < in1; i++)
			cin >> temp[i];
		if (in1 == 1) {
			cout << "Jolly\n";
			continue;
		}
		for (int i = 0; i < in1 - 1; i++) {
			check[i] = abs(temp[i] - temp[i + 1]);
		}
		sort(check, check + in1 - 1);
		for (int i = 0; i < in1 - 1; i++) {
			if (check[i] != i + 1) {
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "Jolly\n";
		else
			cout << "Not jolly\n";
	}
}