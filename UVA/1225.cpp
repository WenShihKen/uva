#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int digits[10005][10] = {};
	for (int i = 1; i <= 10000; i++) {
		int temp = i;
		for (int j = 0; j < 10; j++)
			digits[i][j] = digits[i - 1][j];
		while (temp) {
			++digits[i][temp % 10];
			temp /= 10;
		}
	}
	int t;
	
	cin >> t;
	while (t--) {
		int in1;
		cin >> in1;
		cout << digits[in1][0] << " " << digits[in1][1] << " " << digits[in1][2] << " " << digits[in1][3] << " " << digits[in1][4] << " " << digits[in1][5] << " " << digits[in1][6] << " " << digits[in1][7] << " " << digits[in1][8] << " " << digits[in1][9] << endl;
	}
}