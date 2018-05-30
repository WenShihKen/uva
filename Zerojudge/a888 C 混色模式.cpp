#include<stdio.h>
long long int t[80005];
int min(int a, int b){
	if (a <= b){
		return a;
	}
	else{
		return b;
	}
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		long long int ans = 0;
		int in1, in2, temp, i;
		scanf("%d%d", &in1, &in2);
		if (in1 < in2){
			temp = in1;
			in1 = in2;
			in2 = temp;
		}
		for (i = 0; i <= 80001; i++){
			t[i] = 0;
		}
		for (i = 1; i <= in2 - 1; i++){
			if (in2 - i >= i){
				t[i] = i * 2 - 1;
			}
			else{
				t[i] = (in2 - i) * 2;
			}
			t[i] += t[i - 1];
		}
		for (i = 1; i <= in2 - 1; i++){
			ans += (t[i] - t[i - 1])*t[min(in1 - i, in2 - 1)];
		}
		printf("%lld\n", ans);
	}
	return 0;
}
