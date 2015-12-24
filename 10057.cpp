#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int in1;
	while (cin >> in1) {
		int *t = new int[in1 + 5], c[65540] = {};
		for (int i = 0; i < in1; i++) {
			cin >> t[i];
			++c[t[i]];
		}
		sort(t, t + in1);
		if (in1 % 2) {
			cout << t[in1 / 2] << " " << c[t[in1 / 2]] << " " << 1 << endl;
		}
		else {
			int t1, t2, out1 = 0;
			t1 = t[in1 / 2 - 1], t2 = t[in1 / 2];
			if (t1 == t2) {
				for (int i = 0; i < in1; i++) {
					if (t[i] == t1)
						out1++;
				}
			}
			else {
				for (int i = 0; i < in1; i++) {
					if (t[i] == t1)
						out1++;
				}
				for (int i = 0; i < in1; i++) {
					if (t[i] == t2)
						out1++;
				}
			}
			cout << t1 << " " << out1 << " " << t2 - t1 + 1 << endl;
		}
	}
}