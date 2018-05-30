#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int count = 1, all[70] = {}, now = 1;
	while (count <= 65) {
		bool check = false;
		for (int i = 1; i <= now / 3; i++) {
			for (int j = i + 1; j <= now / 3; j++) {
				for (int k = j + 1; k <= now / 3; k++) {
					if (i*j + j*k + i*k == now) {
						check = true;
						break;
					}
				}
				if (check)
					break;
			}
			if (check)
				break;
		}
		if (!check) {
			all[count++] = now;
		}
		now++;
	}
	int in1;
	while (cin >> in1) {
		cout << all[in1] << endl;
	}
}