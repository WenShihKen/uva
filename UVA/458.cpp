#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string in1;
	while (getline(cin, in1)) {
		for (int i = 0; i < in1.length(); i++)
			in1[i] -= 7;
		cout << in1 << endl;
	}
}