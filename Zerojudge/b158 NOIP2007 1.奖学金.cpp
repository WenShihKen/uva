#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
struct student {
	int sum = 0, num;
	int a, b, c;
};
bool cmp(student A, student B) {
	if (A.sum == B.sum) {
		if (A.a == B.a) {
			return A.num < B.num;
		}
		return A.a > B.a;
	}
	return A.sum > B.sum;
}
int main()
{
	int in1;
	while (cin >> in1) {
		student s[305] = {};
		for (int i = 0; i < in1; i++) {
			s[i].num = i + 1;
			cin >> s[i].a >> s[i].b >> s[i].c;
			s[i].sum = s[i].a + s[i].b + s[i].c;
		}
		sort(s, s + in1, cmp);
		for (int i = 0; i < 5; i++) {
			printf("%d %d\n", s[i].num, s[i].sum);
		}
	}
}