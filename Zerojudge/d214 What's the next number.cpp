#include<stdio.h>
int main()
{
	long long int t = 285, p = 165, h = 143;
	long long int tsum = 40755, psum = 40755, hsum = 40755;
	long long int next = 40756;
	do{
		if (tsum <= next){
			t += 1;
			tsum = t*(t + 1) / 2;
		}
		if (psum <= next){
			p += 1;
			psum = p*(3 * p - 1) / 2;
		}
		if (hsum <= next){
			h += 1;
			hsum = h*(2 * h - 1);
		}
		next = tsum;
	} while (tsum != psum || tsum != hsum || hsum != psum);
	printf("%lld\n", tsum);
	return 0;
}
