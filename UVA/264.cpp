#include<iostream>

using namespace std;

int main()
{
	int temp[10000] = { 0 };
	for (int i = 1;; i++) {
		temp[i] = i + temp[i - 1];
		if (temp[i] >= 10000000)
			break;
	}
	int in1;
	while (cin >> in1) {
		cout << "TERM " << in1 << " IS ";
		int c = 0;
		for (c = 0; temp[c] < in1; c++);
		int t1 = temp[c], t2 = temp[c - 1]+1, start = 1;
		if (c % 2 == 0) {//下數
			while (t2 != in1) {
				start++;
				c--;
				t2++;
			}
			cout << start << "/" << c << endl;
		}
		else {//上數
			while (t2 != in1) {
				start++;
				c--;
				t2++;
			}
			cout << c << "/" << start << endl;
		}
	}
	return 0;
}