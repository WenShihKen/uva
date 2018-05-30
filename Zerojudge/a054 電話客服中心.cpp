#include<stdio.h>
int main()
{
	int number;
	int check;
	int i, sum=0;
	while (scanf("%d", &number) != EOF){
		check =10- (number % 10);
		check = check % 10;
		for (i = 0; i <= 9; i++){
			sum += ((number % 10)*i);
			number = number / 10;
		}
		if ((sum + 1) % 10 == check){
			printf("AMW\n");
		}
		else if ((sum + 2) % 10 == check){
			printf("KLY\n");
		} 
		else if ((sum + 3) % 10 == check){
			printf("JVX\n");
		}
		else if ((sum + 4) % 10 == check){
			printf("HU\n");
		}
		else if ((sum + 5) % 10 == check){
			printf("GT\n");
		}
		else if ((sum + 6) % 10 == check){
			printf("FS\n");
		}
		else if ((sum + 7) % 10 == check){
			printf("ER\n");
		}
		else if ((sum + 8) % 10 == check){
			printf("DOQ\n");
		}
		else if ((sum + 9) % 10 == check){
			printf("CIP\n");
		}
		else if (sum% 10 == check){
			printf("BNZ\n");
		}
		number = 0; check = 0; i = 0; sum = 0;
	}
	return 0;
}
