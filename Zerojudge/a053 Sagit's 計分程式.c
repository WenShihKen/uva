#include<stdio.h>
int main()
{
	int a;
	int a1;
	while (scanf("%d", &a) != EOF){
		a1 = a % 10;
		if (a>=0&&a<=10){
			printf("%d\n", 6 * a);
		}
		else if (a>=11&&a<=20){
			printf("%d\n", 60 + ((a-10) * 2));
		}
		else if (a>=21&&a<=30){
			printf("%d\n", 80+(a-20));
		}
		else if (a >= 31 && a<40){
			printf("%d\n", 90 + a1 * 1);
		}
		else if (a >= 40){
			printf("100\n");
		}
	}
	return 0;
}
