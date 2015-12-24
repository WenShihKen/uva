//#include<stdio.h>
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	getchar();
//	while (t--) {
//		getchar();
//		int in1, all[1005], c = 0;
//		while (1) {
//			cin >> in1;
//			all[c++] = in1;
//			if (getchar() == '\n') {
//				break;
//			}
//		}
//		string s[1005];
//		for (int i = 0; i < c; i++)
//			cin >> s[i];
//		int temp = c + 1, count = 1;
//		while (temp--) {
//			for (int i = 0; i < c; i++) {
//				if (all[i] == count) {
//					cout << s[i] << endl;
//				}
//			}
//			count++;
//		}
//		if (t >= 1) {
//			cout << endl;
//		}
//	}
//}

#include<stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	string l1, l2, value;
	int index;
	vector<pair<int, string> > ans;
	cin >> t;
	getchar();
	while (t--) {
		getchar();
		getline(cin, l1);
		getline(cin, l2);
		stringstream ss1(l1), ss2(l2);
		while (ss1 >> index) {
			ss2 >> value;
			ans.push_back(pair<int, string>(index, value));
		}
		sort(ans.begin(), ans.end());
		for (int i = 0; i<ans.size(); i++)
			cout << ans[i].second << endl;
		if (t)cout << endl;
		ans.clear();
	}
}