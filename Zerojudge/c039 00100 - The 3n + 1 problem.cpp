#include<stdio.h>
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int temp1, temp2, count, i, max;
		if (in1 > in2){
			temp1 = in2;
			temp2 = in1;
		}
		else{
			temp1 = in1;
			temp2 = in2;
		}
		for (count = 0; temp1 <= temp2; temp1++){
			i = temp1;
			max = 1;
			while (i > 1){
				if (i % 2 == 0){
					i /= 2;
				}
				else{
					i *= 3;
					i += 1;
				}
				max++;
			}
			if (max > count){
				count = max;
			}
		}
		printf("%d %d %d\n", in1, in2, count);
	}
	return 0;
}
