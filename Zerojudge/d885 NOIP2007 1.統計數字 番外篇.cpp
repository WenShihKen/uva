#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int in1;
	while (scanf("%d", &in1) != EOF) {
		int t;
		map<int, int>all;
		for (int i = 0; i < in1; i++) {
			scanf("%d", &t);
			all[t]++;
		}
		for (map<int, int>::iterator i = all.begin(); i != all.end(); i++) {
			printf("%d %d\n", i->first, i->second);
		}
	}
}