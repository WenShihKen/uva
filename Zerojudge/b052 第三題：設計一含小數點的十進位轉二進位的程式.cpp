#include<stdio.h>
#include<math.h>
int main()
{
	double in1;
	while (scanf("%lf", &in1) != EOF){
		int t1 = floorl(in1);
		double t2 = in1 - floorl(in1);
		int temp1[30] = { 0 }, temp2[30] = { 0 };
		int i = 0, count1 = 0, count2 = 0;
		while (t1 > 0){
			temp1[i] = t1 % 2;
			t1 /= 2;
			i++;
			count1++;
		}
		i = 0;
		while (t2 != 0.0){
			t2 *= 2;
			if (t2 >= 1.0){
				temp2[i] = 1;
				t2 -= 1.0;
				i++;
			}
			else{
				temp2[i] = 0;
				i++;
			}
			count2++;
		}
		for (i = count1 - 1; i >= 0; i--){
			printf("%d", temp1[i]);
		}
		printf(".");
		for (i = 0; i < count2; i++){
			printf("%d", temp2[i]);
		}
		printf("\n");
	}
	return 0;
}
