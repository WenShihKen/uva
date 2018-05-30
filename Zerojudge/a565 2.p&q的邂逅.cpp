#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
char in1[10000005] = {};

int main() {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		scanf("%s", in1);
		int ans = 0, temp = 0;
		for (int i = 0; i != strlen(in1); i++) {
			if (in1[i] == 'p') {
				temp++;
			}
			else if (in1[i] == 'q') {
				if (temp > 0) {
					ans++, temp--;
				}
			}
		}
		cout << ans << endl;
	}
}
