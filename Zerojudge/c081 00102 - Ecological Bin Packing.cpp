#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ans[6] = { "BCG","BGC","CBG","CGB","GBC","GCB" };
	int in1[9];
	while (cin >> in1[0]) {
		for (int i = 1; i < 9; i++)
			cin >> in1[i];
		int temp[6];//BGC 012 345 678
		temp[0] = in1[1] + in1[2] + in1[3] + in1[4] + in1[6] + in1[8];
		temp[1] = in1[1] + in1[2] + in1[3] + in1[5] + in1[6] + in1[7];
		temp[2] = in1[0] + in1[1] + in1[4] + in1[5] + in1[6] + in1[8];
		temp[3] = in1[0] + in1[1] + in1[3] + in1[5] + in1[7] + in1[8];
		temp[4] = in1[0] + in1[2] + in1[4] + in1[5] + in1[6] + in1[7];
		temp[5] = in1[0] + in1[2] + in1[3] + in1[4] + in1[7] + in1[8];
		long long int min = 99999999999, remind = 0;
		for (int i = 0; i < 6; i++) {
			if (min > temp[i])
				min = temp[i], remind = i;
		}
		cout << ans[remind] << " " << min << endl;
	}
	return 0;
}
