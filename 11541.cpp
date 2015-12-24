#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t, c = 1;
	cin >> t;
	while (t--) {
		string in1;
		cin >> in1;
		printf("Case %d: ", c++);
		for (int i = 0; i < in1.length();) {
			if (in1[i] >= 'A'&&in1[i] <= 'Z') {
				int rec = 0;
				char ch = in1[i];
				++i;
				while (in1[i] >= '0'&&in1[i] <= '9') {
					rec = rec * 10 + in1[i] - '0';
					++i;
				}
				for (int j = 0; j < rec; j++)
					printf("%c", ch);
			}
		}
		cout << endl;
	}
}