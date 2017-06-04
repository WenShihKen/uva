#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int in1, in2, in3, in4, in5, in6;
	while (cin >> in1 >> in2 >> in3 >> in4 >> in5 >> in6) {
		if (in1 == 0 && in2 == 0 && in3 == 0 && in4 == 0 && in5 == 0 && in6 == 0)
			break;
		int ans = in6 + in5 + in4 + in3 / 4;
		in1 -= 11 * in5;
		in2 -= 5 * in4;
		
		if (in3 % 4)
			ans++;
		if (in3 % 4 == 1) {
			in2 -= 5, in1 -= 7;
		}
		else if (in3 % 4 == 2) {
			in2 -= 3, in1 -= 6;
		}
		else if (in3 % 4 == 3) {
			in2 -= 1, in1 -= 5;
		}
		if (in2 < 0) {
			in1 += 4 * in2;
			in2 = 0;
		}
		if (in1 < 0)
			in1 = 0;
		ans += ceil((in1 + 4 * in2) / 36.0);
		cout << ans << endl;
	}
}