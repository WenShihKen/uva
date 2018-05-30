#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;

	while (scanf("%d%d", &a, &b) != EOF){
		int a1, time = 0;
		for (a1 = a; a1 <= b; a1++){
			int temp, count = 0;
			temp = a1;
			while (temp != 0){
				temp /= 10;
				count++;
			}
			int temp1, temp2, powtime = count;
			temp1 = a1;
			powtime = count;
			double number = 0;
			while (count--){
				temp2 = temp1 % 10;
				number += pow(temp2, powtime);
				temp1 /= 10;
			}
			if (number == a1){
				printf("%.f ", number); 
				time++;
			}
		}
			if (time == 0){
				printf("none");
			}
		printf("\n");
	}
	return 0;
}
