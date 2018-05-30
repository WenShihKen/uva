#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
typedef unsigned long long int LL;
#define mod 10000

int main()
{
	string in1;
	while (getline(cin, in1)) {
		stack<LL>temp;
		bool oper = false;
		LL ans = 0;
		for (int i = 0; i < in1.length();) {
			if (in1[i] == '+') {
				oper = false;
				i++;
			}
			else if (in1[i] == '*') {
				oper = true;
				i++;
			}
			else {
				LL t = 0;
				while (in1[i] >= '0'&&in1[i] <= '9') {
					t = t * 10 + in1[i] - '0';
					i++;
				}
				if (!oper) {
					temp.push(t);
				}
				else {
					t = (t*temp.top()) % mod;
					temp.pop();
					temp.push(t);
				}
			}
		}
		while (!temp.empty()) {
			ans = (ans + temp.top()) % mod;
			temp.pop();
		}
		cout << ans << endl;
	}
}