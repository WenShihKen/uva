#include<stdio.h>
int gcd(int a, int b)
{
	int temp = 0;
	if (a > b){
		temp = a;
		a = b;
		b = a;
	}
	while (a%b){
		int temp2 = 0;
		b %= a;
		temp2 = b;
		b = a;
		a = temp2;
	}
	return b;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many, out1, i;
		scanf("%d%d", &many, &out1);
		for (i = 1; i < many; i++){
			int t1 = 0;
			scanf("%d", &t1);
			out1 = gcd(out1, t1);
		}
		printf("%d\n", out1);
	}
	return 0;
}
