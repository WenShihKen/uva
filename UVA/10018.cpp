#include<iostream>
using namespace std;
long long int recursive(long long int in1)
{
	long long int temp = 0;
	while (in1) {
		temp = temp * 10 + in1 % 10;
		in1 /= 10;
	}
	return temp;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long int in1, round = 0, temp1 = 0;
		cin >> in1;
		temp1 = recursive(in1);
		while (in1 != temp1) {
			round += 1;
			in1 += temp1;
			temp1 = recursive(in1);
		}
		cout << round << " " << temp1 << endl;
	}
	return 0;
}