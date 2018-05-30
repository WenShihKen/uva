#include<stdio.h>
int gcd(long long int x,long long int y)
{
	long long int temp;
	while (y){
		temp = x%y;
		x = y; 
		y = temp;
	}
	return x;
}
int main()
{
	long long int many;
	while (scanf("%lld", &many) != EOF){
		long long int in1,in2, i,ans=0;
		for (i = 0; i < many; i++){
			scanf("%lld%lld", &in1,&in2);
ans=gcd(in1,in2);
printf("%lld\n", in1*in2/ans);
		}
	}
	return 0;
}
