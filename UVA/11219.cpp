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

int main() {
	int t;
	while (cin >> t) {
		int count = 1;
		while (t--) {
			getchar();
			int now1, now2, now3, birth1, birth2, birth3;
			char c;
			cin >> now1 >> c >> now2 >> c >> now3;
			cin >> birth1 >> c >> birth2 >> c >> birth3;
			printf("Case #%d: ", count++);
			int ans = now3 - birth3;
			if (birth2 > now2)
				ans--;
			if (birth2 == now2&&birth1 > now1)
				ans--;
			if (ans < 0)
				printf("Invalid birth date\n");
			else if (ans > 130)
				printf("Check birth date\n");
			else
				cout << ans << endl;
		}
	}
}
