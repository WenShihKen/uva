#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int in1;
		cin >> in1;
		in1 = (in1 * 567 / 9 + 7492) * 235 / 47 - 498;
		cout << abs(in1 / 10 % 10) << endl;
	}
}