#include<iostream>
using namespace std;
int main()
{
	long long int all[50] = { 0 };
	all[0] = 1;
	all[1] = 1;
	all[2] = 5;
	long long int i;
	for (i = 3; i <= 40; i++) {
		all[i] = all[i - 1] + all[i - 2] * 4 + all[i - 3] * 2;
	}
	long long int time;
	cin >> time;
	while (time--) {
		long long int find;
		cin >> find;
		cout << all[find] << endl;
	}
	return 0;
}
