#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double in1, long_number;
	while (cin >> in1 >> long_number) {
		cout << pow(long_number, 1.0 / in1) << endl;
	}
	return 0;
}