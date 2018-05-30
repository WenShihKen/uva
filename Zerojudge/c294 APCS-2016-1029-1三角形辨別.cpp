#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int in1[3] = {};
	while (cin >> in1[0] >> in1[1] >> in1[2]) {	
		sort(in1, in1 + 3);
		int a = in1[0], b = in1[1], c = in1[2];
		printf("%d %d %d\n", a, b, c);
		if (a + b <= c)
			printf("No\n");
		else if (a*a + b*b < c*c) {
			printf("Obtuse\n");
		}
		else if (a*a + b*b == c*c) {
			printf("Right\n");
		}
		else if (a*a + b*b > c*c) {
			printf("Acute\n");
		}
	}
}