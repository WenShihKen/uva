#include<stdio.h>
int count[1000003][11] = { 0 };
int main()
{
	int i;
	for (i = 1; i <= 1000000; i++){
		int temp1 = i;
		while (temp1 > 0){
			int temp = 0;
			temp = temp1 % 10;
			count[i][temp]++;
			temp1 /= 10;
		}
	}
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int j, sum = 0;
		for (j = 1; j <= in1; j++){
			sum += count[j][in2];
		}
		printf("%d\n", sum);
	}
	return 0;
}
