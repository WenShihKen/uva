#include<iostream>

using namespace std;

int main()
{
	int start, end;
	while (cin >> start >> end) {
		int max_cycle = 1;
		cout << start << " " << end << " ";
		if (start > end) {
			int temp = end;
			end = start;
			start = temp;
		}
		for (int i = start; i <= end; ++i) {
			int t = i, temp_cycle = 1;
			while (t != 1) {
				if (t % 2) {
					t = 3 * t + 1;
				}
				else {
					t /= 2;
				}
				++temp_cycle;
			}
			max_cycle = max_cycle > temp_cycle ? max_cycle : temp_cycle;
		}
		cout << max_cycle << endl;
	}
	return 0;
}