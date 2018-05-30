#include<stdio.h>
#include<math.h>
int main()
{
	long long int in1[8][9];
	int i, j, count = 0;
	for (i = 1; i <= 7; i++){
		for (j = 1; j <= 8; j++){
			in1[i][j] = powl(2, count);
			count++;
		}
	}
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF){
		printf("%lld\n", in1[x][y]);
	}
	return 0;
}
