#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string in1;
	while (cin >> in1) {
		int temp[40000] = {}, count = 0, change = 0;
		for (int i = 0; i < in1.length(); i++) {
			if (in1[i] == 'y') {
				temp[count++] = i;
			}
		}
		for (int i = 0; i < count; i++) {
			change += abs(temp[i] - i * 3);
		}
		cout << change << endl;
	}
}
