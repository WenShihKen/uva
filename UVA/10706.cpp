#include<stdio.h>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
typedef long long int LL;

int main()
{
	LL len[35000] = {}, all[35000] = {};
	for (LL i = 1, sum = 0; sum < 2147483647; i++) {
		LL temp = i, l = 0;
		while (temp) {
			temp /= 10;
			l++;
		}
		len[i] = l;
		all[i] += (all[i - 1] + len[i]);
		sum += all[i];
	}

	int t;
	cin >> t;
	while (t--) {
		LL find;
		cin >> find;
		for (int i = 1; find > all[i]; find -= all[i], i++);
		int index, digit = 0;
		for (index = 1; find > len[index]; find -= len[index], index++);
		stringstream temp;
		temp << index;
		string out1;
		temp >> out1;
		while (1) {
			if (find) {
				--find;
				++digit;
			}
			else {
				break;
			}
		}
		cout << out1[digit - 1] << endl;
	}
}