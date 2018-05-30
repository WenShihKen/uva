#include<stdio.h>
int main()
{
	int subjects;
	int a[1000], count;
	double temp, sum;
	while (scanf("%d",&subjects) != EOF){
		sum = 0;
		for (count = 0; count < subjects; count++){
			scanf("%d", &a[count]);
			sum += a[count];
		}
		temp = sum / subjects;
		if (temp> 59){
			printf("no\n");
		}
		else if(temp<=59){
			printf("yes\n");
		}
	}
	return 0;
}
