#include<iostream>
using namespace std;

int main()
{
	int start, in1, in2, in3;
	while (cin >> start >> in1 >> in2 >> in3) {
		if (start == 0 && in1 == 0 && in3 == 0 && in3 == 0)
			break;
		int ans = 1080, t1 = start - in1, t2 = in2 - in1, t3 = in2 - in3;
		t1 = t1 < 0 ? t1 += 40 : t1;
		t2 = t2 < 0 ? t2 += 40 : t2;
		t3 = t3 < 0 ? t3 += 40 : t3;
		ans += (t1 * 9 + t2 * 9 + t3 * 9);
		cout << ans << endl;
	}
}