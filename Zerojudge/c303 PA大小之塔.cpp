#include<iostream>
#include<string>

using namespace std;

int main()
{
	int in1;
	string s1;
	while (cin >> in1) {
		cin >> s1;
		string ans;
		for (int i = 0; i != s1.length(); i++) {
			if (s1[i] >= 'A'&&s1[i] <= 'Z') {
				ans += (s1[i] + 32);
			}
			else {
				ans += (s1[i] - 32);
			}
		}
		cout << ans << endl;
	}
}