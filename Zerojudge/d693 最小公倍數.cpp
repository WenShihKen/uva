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
		if (many == 0){
			break;
		}
		long long int ans = 1, now, i;
		for (i = 0; i < many; i++){
			scanf("%lld", &now);
			ans = ans / gcd(now, ans)*now;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
