#include<stdio.h>
#include<math.h>
int main()
{
	int times;
	int start1, start2, end1, end2, fire1, fire2;
	double a1, a2, b1, b2, c1, c2; 
	double temp1, temp2;
	double count1, count2, count3;
	scanf("%d", ×);
	while (times > 0){
		scanf("%d%d%d%d%d%d", &start1, &start2, &end1, &end2, &fire1, &fire2);
		a1 = abs(end1 - start1);
		a2 = abs(end2 - start2);
		b1 = abs(end1 - fire1);
		b2 = abs(end2 - fire2);
		c1 = abs(start1 - fire1);
		c2 = abs(start2 - fire2);
		temp1 = a1 / a2;
		temp2 = b1 / b2;
		count1 = (b1*b1) + (b2*b2);
		count2 = (c1*c1) + (c2*c2);
		count3 = (a1*a1) + (a2*a2);
		if (temp1 == temp2&&count3>=count2&&count3>=count1){
			printf("該死的東西!竟敢想讓我死！\n");
		}
		else{
			printf("父親大人!母親大人!我快到了！\n");
		}
		a1 = 0; a2 = 0; b1 = 0; b2 = 0; temp1 = 0; temp2 = 0;
		times--;
	}
	return 0;
}
