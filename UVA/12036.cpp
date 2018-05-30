#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t, c = 1;
	cin >> t;
	while (t--) {
		int t[105] = {}, in1, temp;
		cin >> in1;
		for (int i = 0; i < in1*in1; i++) {
			cin >> temp;
			++t[temp];
		}
		bool flag = true;
		for (int i = 0; i < in1; i++) {
			if (t[i] > in1) {
				flag = false;
				break;
			}
		}
		if (flag)
			printf("Case %d: yes\n", c++);
		else
			printf("Case %d: no\n", c++);
	}
}