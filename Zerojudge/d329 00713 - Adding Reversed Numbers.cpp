#include<stdio.h>
#include<math.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int in1, in2, a1[100] = { 0 }, a2[100] = { 0 }, i = 0, j, k, sum = 0, s[100] = { 0 };
		scanf("%d%d", &in1, &in2);
		while (in1){
			a1[i] = in1 % 10;
			in1 /= 10;
			i++;
		}
		for (j = 0, k = i - 1; j < i, k >= 0; j++, k--){
			in1 += a1[k] * pow(10, j);
		}
		i = 0;
		while (in2){
			a2[i] = in2 % 10;
			in2 /= 10;
			i++;
		}
		for (j = 0, k = i - 1; j < i, k >= 0; j++, k--){
			in2 += a2[k] * pow(10, j);
		}
		sum = in1 + in2;
		i = 0;
		while (sum){
			s[i] = sum % 10;
			sum /= 10;
			i++;
		}
		for (j = 0, k = i - 1; j < i, k >= 0; j++, k--){
			sum += s[k] * pow(10, j);
		}
		printf("%d\n", sum);
	}
	return 0;
}
