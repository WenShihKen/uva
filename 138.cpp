#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int in1 = 5, in2 = 7, count = 0;
	while (in1++) {
		long long int temp1 = in1*(in1 - 1) / 2;
		while (in2++) {
			long long int temp2 = in2*(in2 + 1) / 2;
			if (temp2 - temp1 - in1 == temp1) {
				printf("%10lld%10lld\n", in1, in2);
				count++;
				break;
			}
			else if (temp2 - temp1 - in1 > temp1) {
				break;
			}
		}
		if (count == 10) {
			break;
		}
	}
	return 0;
}