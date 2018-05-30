#include<stdio.h>
int main()
{
	int num;
	while (scanf("%d", &num) != EOF){
		int last = 1, count;
		for (count = 1; count <= num; count++){
			last *= count;
			while (last % 10 == 0){
				last /= 10;
			}
			if (last > 100000){
				last = last % 100000;
			}
		}
		last = last % 10;
		printf("%5d -> %d\n", num, last);
	}
	return 0;
}
