#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int in1;
	cin >> in1;
	while (in1--) {
		int in2;
		cin >> in2;
		string ans = (in2 % 3 == 1) ? "NO" : "YES";
		cout << ans << endl;
	}
}