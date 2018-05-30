#include<stdio.h>
int main()
{
	int start, end;
	while (scanf("%d%d", &start, &end) != EOF){
		int i, sum = 0, temp, temp1;
		for (i = start; i <= end; i++){
			temp1 = i;
			while (temp1 > 0){
				temp = temp1 % 10;
				if (temp == 2){
					sum++;
				}
				temp1 /= 10;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
