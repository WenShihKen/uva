#include<iostream>
#include<algorithm>
#define max 2147483647
using namespace std;

int main()
{
	long long int temp[1000] = {}, many = 0;
	for (long long int i = 1; i < max; i *= 2) {
		for (long long int j = 1; j < max; j *= 3) {
			if (i*j <= max)
				temp[many++] = i*j;
			else
				break;
		}
	}
	sort(temp, temp + many);
	long long int flag;
	while (cin >> flag) {
		long long int out1;
		if (flag == 0)
			break;
		for (int start = 0; start <= many; start++) {
			if (flag <= temp[start]) {
				out1 = temp[start]; break;
			}
		}
		cout << out1 << endl;
	}
}