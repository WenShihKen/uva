#include<stdio.h>
int main()
{
	long long int time;
	scanf("%lld", &time);
	while (time>0){
		long long int in1, in2;
		scanf("%llo%llo", &in1, &in2);
		printf("%llX\n", in1 + in2);
		time--;
	}
	return 0;
}
