#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

#define PI 3.141592653589793

int main()
{
	double x1, y1, x2, y2, x3, y3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
		double a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		double b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
		double c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
		double s = (a + b + c) / 2;
		double r = a*b*c / sqrt(s*(s - a)*(s - b)*(s - c)) / 2;
		printf("%.2lf\n", r*PI);
	}
}
