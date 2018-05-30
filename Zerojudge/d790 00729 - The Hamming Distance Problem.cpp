#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int in1, in2;
		cin >> in1 >> in2;
		string temp;
		for (int i = 0; i < in1 - in2; i++)
			temp += "0";
		for (int i = 0; i < in2; i++)
			temp += "1";
		do {
			cout << temp << endl;
		} while (next_permutation(temp.begin(), temp.end()));
		cout << endl;
	}
}
