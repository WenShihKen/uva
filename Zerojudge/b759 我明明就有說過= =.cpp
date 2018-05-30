#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
	string in1;
	while (cin >> in1) {
		for (int i = 0; i < in1.length(); i++) {
			cout << in1 << endl;
			char t = in1[0];
			in1 += t;
			in1.assign(in1, 1, in1.length() - 1);
		}
	}
}
