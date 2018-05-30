#include<stdio.h>
int main()
{
	long long int round;
	scanf("%lld", &round);
	while (round--){
		long long int a, b, q, count = 0, temp1 = 0, temp2 = 0, start1 = 1, start2 = 1, end1 = 0, end2 = 0;
		scanf("%lld%lld%lld", &a, &b, &q);
		if (a == b){
			count = 1;
		}
		temp1 = a*q;
		temp2 = b*q;
		end1 = (start1 + temp1)%10007;
		end2 = (start2 + temp2)%10007;
		if (end1 == end2){
			count = 1;
		}
		if (count){
			printf("SAFE\n");
		}
		else{
			printf("BOOM\n");
		}
	}
	return 0;
}
