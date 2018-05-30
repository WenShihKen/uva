#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d\n\n", &t);
	for (int i = 0; i < t; i++) {
		map<string, int>tree;
		string in1;
		double all = 0;
		while (getline(cin, in1)) {
			if (in1.length() == 0)
				break;
			tree[in1]++;
			++all;
		}
		for (map<string, int>::iterator it = tree.begin(); it != tree.end(); ++it) {
			cout << it->first << " ";
			printf("%.4f\n", (tree[it->first] / all * 100));
		}
	}
}
