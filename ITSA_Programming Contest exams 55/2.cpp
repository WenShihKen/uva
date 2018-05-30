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

typedef long long int LL;

int main() {
	int in1;
	cin >> in1;
	while (in1--) {
		int ans = 0;
		int a, b, c;
		cin >> a >> b >> c;
		
		for (int i = 0;; i++){ 

			if (i % 7 == a &&i % 11 == 11 - b&&i % 17 == c) {
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
}