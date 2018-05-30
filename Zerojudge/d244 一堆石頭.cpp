#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int many;
	map<int, int>num;
	while (cin >> many) {
		num[many]++;
	}
	for (map<int, int>::iterator i = num.begin(); i != num.end(); i++) {
		if (i->second % 3 != 0) {
			cout << i->first << endl;
			break;
		}
	}
}
