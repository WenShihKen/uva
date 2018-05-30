#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int in1;
		cin >> in1;
		int a = 0, b = 0, c = 0;
		bool flag = false;
		for (int i = 0; i <= 16; i++) {
			for (int j = 0; j < i; j++) {
				for (int k = 0; k < j; k++) {
					int temp = 0;
					if (i >= 3)
						temp += (i*(i - 1)*(i - 2)) / 6;
					if (j >= 2)
						temp += (j*(j - 1)) / 2;
					if (k >= 1)
						temp += k;
					if (temp == in1) {
						a = i, b = j, c = k;
						flag = true;
						break;
					}
				}
				if (flag)
					break;
			}
			if (flag)
				break;
		}
		cout << a << b << c << endl;
	}
}